void foo(int N)
{
	int i;
	int a[N];

#pragma scop
	for (i = 0; i < floord(N, 2); ++i)
		a[i] = i;
#pragma endscop
}
