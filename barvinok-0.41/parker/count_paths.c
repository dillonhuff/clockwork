/* Erin Parker (parker@cs.unc.edu), March 2004 */

#include <stdlib.h>
#include "dfa.h"


double count_accepting_paths(DFA *dfa, int num_states, int num_freevars)
{
  int dead_state[num_states];		/* list of dead states */
  int num_edges_from[num_states];	/* number of (live) edges from state i */
  int edge_from[num_states][num_states];/* state on edge from state i */
  double weight[num_states][num_states];/* weight on edge from state i */
  double N1[num_states];		/* number of paths to state i */
  double N2[num_states];
  int do_N1 = 1;
  double num_paths = 0;
  int L = 0;  				/* length of longest path considered */

  paths pp[num_states];
  trace_descr tp;

  int i, j, k;


  for (i = 0; i < num_states; i++) {  
    pp[i] = make_paths(dfa->bddm, dfa->q[i]);

    num_edges_from[i] = 0;
    N1[i] = N2[i] = 0;

    if (dfa->f[i]==-1 && pp[i]->next==NULL && pp[i]->to==i) 
      dead_state[i] = 1;
    else
      dead_state[i] = 0;
  }

  for (i = 0; i < num_states; i++) {
    
    if(dead_state[i])
      continue;

    /* Do while there are remaining edges from state i . . . */
    while (pp[i]) {
      int found = 0;
      
      for (j = 0; j < num_edges_from[i]; j++)
	if (edge_from[i][j] == pp[i]->to) {
	  found = 1;
	  break;
	}
      if (!found) {
	num_edges_from[i]++;
	weight[i][j] = 0;
	edge_from[i][j] = pp[i]->to;
      }
      
      /* Check if edge (i,pp[i]->to) leads to a dead state, continue if not */
      if (!dead_state[pp[i]->to]) {
	    
	int count = 1;

	/* First, go through each track whose label is '0' or '1' */
	for (tp = pp[i]->trace, k=0; tp; tp = tp->next, k++) {;}

	/* Then, the label for each remaining track must be 'X',
	   update count appropriately */
	for (; k < num_freevars; k++) 
	  count *= 2;
	    
	/* Update weight on edge (i,pp[i]->to) */
	weight[i][j] += count;
      }

      /* Get next edge from state i and repeat */
      pp[i] = pp[i]->next;
    }
  }
  
  for (i = 0; i < num_states; i++)
    kill_paths(pp[i]);
  

  /* Recurrence operation on array N */
  N1[0] = N2[0] = 1;  /* base case: N = {1 0 0 0 0 ... 0 0 } */
 
  while(1) {
    double temp[num_states];
    int same = 1;

    /* N_i = N_{i-1} * W */
    for (j = 0; j < num_states; j++)
      temp[j] = 0;
	
    if(do_N1)
      for (k = 0; k < num_states; k++)
	for (j = 0; j < num_edges_from[k]; j++)
	  temp[edge_from[k][j]] += N1[k] * weight[k][j];
    else
      for (k = 0; k < num_states; k++)
	for (j = 0; j < num_edges_from[k]; j++)
	  temp[edge_from[k][j]] += N2[k] * weight[k][j];

    if(do_N1) {
      for (j = 0; j < num_states; j++) 
	N2[j] = temp[j];
      do_N1 = 0;
    } 
    else {  
      for (j = 0; j < num_states; j++) 	
	N1[j] = temp[j];
      do_N1 = 1;
    }
      
    for (j = 0; j < num_states && same==1; j++)
      if((N1[j]==0 && N2[j]>0) || (N1[j]>0 && N2[j]==0))
	same = 0;

    if(same == 1)
      break;

    L++;
  }

  for(j = 0; j < num_states; j++) 
    if (dfa->f[j] == 1) 
      num_paths += N1[j];

  return num_paths;
}

