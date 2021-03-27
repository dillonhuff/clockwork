/*
4ti2 -- A software package for algebraic, geometric and combinatorial
problems on linear spaces.

Copyright (C) 2006 4ti2 team.
Main author(s): Matthias Walter.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA. 
*/

#include "lattice.h"

#include <assert.h>
#include <stdlib.h>
#include "defs.h"

//                                                                            //

VectorArray generateLattice(LinearSystem system)
{
	int i,j,k;
	int n,e;
	int currentindex, bestindex, currentvalue, bestvalue;
	int identities;
	int factor;
	bool flag;
	VectorArray array;
	Matrix H,I,C;
	Vector vec;

	assert(system);
	assert(normVector(system->b, system->Equations)==0);

	n = system->Variables;
	e = system->Equations;

	array = createVectorArray(n);
	for (i=0; i<n; i++)
		array->Properties[i] = system->VarProperties[i];

	// init H
	H = createMatrix(n, e);
	for (i=0; i<n; i++)
		for (j=0; j<e; j++)
			H->Data[i+n*j] = system->A[i][j];

	// search for columns with norm 1 and use them to row-echelonize to lower right
	identities = 0;
	for (i=n-1; i>=0; i--)
	{
		flag = false;
		for (j=0; j<identities; j++)
			if (H->Data[i+(j+e-identities)*n]!=0)
				flag = true;
		if (flag)
			continue;
		k = -1;
		for (j=0; j<e-identities; j++)
		{
			if (k==-1 && abs(H->Data[i+j*n])==1)
				k = j;
			else if (H->Data[i+j*n]!=0)
			{
				k = -2;
				break;
			}
		}
		if (k>=0)
		{
			swapMatrixRows(H, k, e-identities-1);
			swapVariableProperties(array->Properties, i, n-identities-1);
			swapMatrixColumns(H, i, n-identities-1);
			identities++;
		}
	}

	// copy H for later usage
	C = copyMatrix(H);

	n -= identities;
	e -= identities;

	if (n>0)
	{
		// init I
		I = createIdentityMatrix(n);

		// hermite the matrix H[identities .. n-1][identities .. e-1]

		for (i=0; i<minm(n,e); i++)
		{
			// find gcd-minimal row
			bestindex = i;
			bestvalue = 0;
			for (currentindex=i; currentindex<e; currentindex++)
			{
				currentvalue = gcdVector(H->Data+i+H->Width*currentindex, n-i);
				if (currentvalue!=0 && (bestvalue==0 || currentvalue<bestvalue))
				{
					bestvalue = currentvalue;
					bestindex = currentindex;
				}
			}
			if (bestvalue==0)
				break;


			// swap this with i-th
			swapMatrixRows(H, bestindex, i);

			do
			{
				// find reducer
				bestindex = i;
				bestvalue = 0;
				for (currentindex=i; currentindex<n; currentindex++)
				{
					currentvalue = abs(H->Data[currentindex+H->Width*i]);
					if (currentvalue!=0 && (bestvalue<=0 || currentvalue<bestvalue))
					{
						bestindex = currentindex;
						bestvalue = currentvalue;
					}
				}
				assert(bestvalue!=0);

				// if negative, change sign of column
				if (H->Data[bestindex+H->Width*i]<0)
				{
					negateMatrixColumn(H, bestindex);
					negateMatrixColumn(I, bestindex);
				}
	
				// reduce
				flag = false;
				for (j=0; j<n; j++)
				{
					if (j!=bestindex)
					{
						factor = H->Data[j+H->Width*i] / -bestvalue;
						if (H->Data[j+H->Width*i] % bestvalue != 0 && j>i)
							flag = true;
						combineMatrixColumns(H, j, factor, bestindex);
						combineMatrixColumns(I, j, factor, bestindex);
					}
				}
			} while (flag);

			if (bestindex!=i)
			{
				swapMatrixColumns(H, i, bestindex);
				swapMatrixColumns(I, i, bestindex);
			}
		}

		while (i<n)
		{
			vec = createVector(H->Width);
			// fill from I
			for (j=0; j<n; j++)
				vec[j] = I->Data[i+j*n];
			// fill identity part from system
			for (j=0; j<identities; j++)
			{
				factor = 0;
				for (k=0; k<n; k++)
					factor -= vec[k]*C->Data[C->Width*(e+j)+k];
				vec[n+j] = factor*H->Data[H->Width*(e+j)+n+j];
			}
			appendToVectorArray(array, vec);
			i++;
		}
		deleteMatrix(I);
	}

	deleteMatrix(H);
	deleteMatrix(C);

	return array;
}

//                                                                            //
