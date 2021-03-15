// Constantinos Bartzis  bar@cs.uscb.edu

#include <dfa.h>
#include <stdlib.h>
#include <math.h>

int log_2(int x){
int i;
if(x<0)
   x*=-1;
for(i=0;x>0;i++)
  x=x>>1;
return i;
}

struct map_ent{
              int i, ir; //state index
              int s, sr; //status: 0=not yet processed
                         //        1=to be expanded
                         //        2=done
                         //ir and sr are for the rejecting clone
              };

int *corresP;    //used by dfaEquivalence

//returns the gcd of integers x and y
int gcd(int x, int y){
int temp;
  while (y!=0){
    temp=x%y;
    x=y;
    y=temp;
    }
  if (x>0) return x;
  else return -x;
}

//returns the sum of the coefficients for the non-zero bits up to the k-th
//ith coefficient corresponds to the ith least-significant bit
int count_ones(long n, int k, int *coeffs){
  int ones=0;
  for(k--;k>=0;k--){
    if(n&1) ones+=coeffs[k];
    n>>=1;
    }
return ones;
}

//Returns a string of length k containing the binary representation of i
char *bintostr(unsigned long n, int k){
char *str;
str=(char *)malloc(k+1);
str[k]='\0';
  for(k--;k>=0;k--){
    if(n&1) str[k]='1';
    else    str[k]='0';
    n>>=1;
  }
return str;
}


//reduces the coefficients by dividing them with their gcd
//kind: 0 for = ,  1 for <
//returns 1 for contradictions
int preprocess(int vars, int *coef, int *cons, int kind){
int i;
int temp=abs(coef[0]);
for (i=1; i<vars; i++)
  temp=gcd(abs(coef[i]),temp);
for (i=0; i<vars; i++)
  coef[i]=coef[i]/temp;
if (kind==0){
  if (*cons%temp==0){
    *cons=*cons/temp;
    return 0;
    }
  else return 1;
  }
if (kind==1){
  *cons=*cons+temp-1;
  if (*cons>=0) *cons=*cons/temp;
  else *cons=(*cons+1)/temp-1;
  return 0;
  }
return 0;
}


//Constructs a DFA for the equation coeffs*variables+constant=0
DFA *build_DFA_eq(int vars, int *coeffs, int constant, int *indices){
int min, max, states, next_index, next_label, result, target,
count, range;
long i;
unsigned long j, transitions;
struct map_ent *map;
char *statuces;
DFA *equality, *temp;
int *rev_map;

if (preprocess(vars, coeffs, &constant, 0)) return dfaFalse();

//initialization

min=0;
max=0;
for (i=0; i<vars; i++)
  if (coeffs[i]>0) max+=coeffs[i];
  else min+=coeffs[i];

range=max-min+1;
if (constant>max) max=constant;
else if(constant<min) min=constant;
states=max-min+2;
if(states>range*(log_2(constant)+1)+1)
   states=range*(log_2(constant)+1)+1;

rev_map=(int *)malloc((states+1)*sizeof(int));
for(i=0;i<=states;i++)
  rev_map[i]=max+1;


//This array maps state labels (carries) to state indices
map = (struct map_ent *)malloc((max-min+2)*sizeof(struct map_ent)) -min;
for(i=min; i<max+2; i++){
  map[i].s=0;
//  map[i].i=-1;
  }
map[constant].s=1; //the first state to be expanded
next_index=0;            //the next available state index
next_label=constant;     //the next available state label
map[constant].i=0;
rev_map[0]=constant;
count=0;

transitions=1<<vars;  //number of transitions from each state

//Begin building
dfaSetup(states, vars, indices);


while(next_label<max+1){  //there is a state to expand (excuding sink)
  map[next_label].s=2;
  dfaAllocExceptions(transitions/2);
    for(j=0; j<transitions; j++){
      result=next_label+count_ones(j,vars,coeffs);
      if(!(result&1)){
        target=result/2;
        if(map[target].s==0){
           map[target].s=1;
           next_index++;
           map[target].i=next_index;
           rev_map[next_index]=target;
           }
        dfaStoreException(map[target].i,bintostr(j,vars));
        }
      }
  dfaStoreState(states-1);
  count++;
//  for(next_label=min; (next_label<=max) &&
//(map[next_label].i!=count); next_label++);
//find next state to expand
  next_label=rev_map[count];
  }
for(;count<states;count++){
  dfaAllocExceptions(0);
  dfaStoreState(states-1);
  }

//define accepting and rejecting states
statuces=(char *)malloc(states+1);
for(i=0;i<states;i++)
statuces[i]='-';
if (map[0].s==2) statuces[map[0].i]='+';
statuces[states]='\0';
temp=dfaBuild(statuces);
equality=dfaMinimize(temp);
dfaFree(temp);
return equality;
}



// Constructs a DFA for the equation coeffs*variables+constant=0
// in two's complement arithmetic
DFA *build_DFA_eq_2sc(int vars, int *coeffs, int constant, int *indices){
int min, max, states, next_index, next_label, result, target, count;
long i;
unsigned long j, transitions;
struct map_ent *map;
char *statuces;
DFA *equality, *temp;

if (preprocess(vars, coeffs, &constant, 0)) return dfaFalse();

//initialization

min=0;
max=0;
for (i=0; i<vars; i++)
  if (coeffs[i]>0) max+=coeffs[i];
  else min+=coeffs[i];

if (constant>max) max=constant;
else if(constant<min) min=constant;
states=2*max-2*min+3;


//This array maps state labels (carries) to state indices
map = (struct map_ent *)malloc(states*sizeof(struct map_ent)) -min;
for(i=min; i<max+2; i++){
  map[i].s=0;
  map[i].sr=0;
  map[i].i=-1;
  map[i].ir=-1;
  }

map[constant].sr=1; //the first state to be expanded
next_index=0;            //the next available state index
next_label=constant;     //the next available state label
map[constant].i=-1;
map[constant].ir=0;
count=0;

transitions=1<<vars;  //number of transitions from each state

//Begin building
dfaSetup(states, vars, indices);


while(next_label<max+1){  //there is a state to expand (excuding sink)
  if(map[next_label].i==count)
    map[next_label].s=2;
  else
    map[next_label].sr=2;
  dfaAllocExceptions(transitions/2);
    for(j=0; j<transitions; j++){
      result=next_label+count_ones(j,vars,coeffs);
      if(!(result&1)){
        target=result/2;
        if (target==next_label){
          if(map[target].s==0){
             map[target].s=1;
             next_index++;
             map[target].i=next_index;
             }
          dfaStoreException(map[target].i,bintostr(j,vars));
          }
        else {
          if(map[target].sr==0){
             map[target].sr=1;
             next_index++;
             map[target].ir=next_index;
             }
          dfaStoreException(map[target].ir,bintostr(j,vars));
          }
        }
      }
  dfaStoreState(states-1);
  count++;
  for(next_label=min; (next_label<=max) &&
(map[next_label].i!=count)&&(map[next_label].ir!=count); next_label++);
//find next state to expand
  }
for(;count<states;count++){
  dfaAllocExceptions(0);
  dfaStoreState(states-1);
  }

//define accepting and rejecting states
statuces=(char *)malloc(states+1);
for(i=0;i<states;i++)
statuces[i]='-';
for(next_label=min;next_label<=max;next_label++)
  if (map[next_label].s==2) statuces[map[next_label].i]='+';
statuces[states]='\0';
temp=dfaBuild(statuces);
equality=dfaMinimize(temp);
dfaFree(temp);
return equality;
}

//Constructs a DFA for the inequation coeffs*variables+constant<0
DFA *build_DFA_ineq(int vars, int *coeffs, int constant, int *indices){
int min, max, states, next_index, next_label, result, target, count, range;
long i, transitions, k;
unsigned long j;
struct map_ent *map;
char *statuces;
DFA *inequality, *temp;
int *rev_map;

preprocess(vars, coeffs, &constant, 1);

//initialization

min=0;
max=0;
for (i=0; i<vars; i++)
  if (coeffs[i]>0) max+=coeffs[i];
  else min+=coeffs[i];

range=max-min+1;
if (constant>max) max=constant;
else if(constant<min) min=constant;
states=max-min+1;
if(states>range*(log_2(constant)+1))
   states=range*(log_2(constant)+1);

rev_map=(int *)malloc((states+1)*sizeof(int));
for(i=0;i<=states;i++)
  rev_map[i]=max+1;

//This array maps state labels (carries) to state indices
map = (struct map_ent *)malloc((max-min+1)*sizeof(struct map_ent)) -min;
for(i=min; i<max+1; i++){
  map[i].s=0;
//  map[i].i=-1;
  }

map[constant].s=1; //the first state to be expanded
next_index=0;            //the next available state index
next_label=constant;     //the next available state label
map[constant].i=0;
rev_map[0]=constant;
count=0;

transitions=1<<vars;  //number of transitions from each state

//Begin building
dfaSetup(states, vars, indices);


while(next_label<max+1){  //there is a state to expand
  map[next_label].s=2;
  dfaAllocExceptions(transitions);
    for(j=0; j<transitions; j++){
      result=next_label+count_ones(j,vars,coeffs);
      if (result>=0) target=result/2;
      else target=(result-1)/2;
      if(map[target].s==0){
         map[target].s=1;
         next_index++;
         map[target].i=next_index;
         rev_map[next_index]=target;
         }
      dfaStoreException(map[target].i,bintostr(j,vars));
      }
  dfaStoreState(count);
  count++;
//  for(next_label=min; (next_label<=max) &&
//(map[next_label].i!=count); next_label++);
//find next state to expand
  next_label=rev_map[count];
  }
for(i=count;i<states;i++){
  dfaAllocExceptions(0);
  dfaStoreState(i);
  }

//define accepting and rejecting states
statuces=(char *)malloc(states+1);
for(i=0;i<count;i++){
  k=rev_map[i];
  if((k<0)&&(map[k].s==2))
    statuces[i]='+';
  else
    statuces[i]='-';
  }
for(;i<states;i++)
statuces[i]='0';
statuces[states]='\0';
temp=dfaBuild(statuces);
temp->ns-=states-count;
inequality=dfaMinimize(temp);
return inequality;
}



// Constructs a DFA for the inequation coeffs*variables+constant<0
// in two's complement arithmetic
DFA *build_DFA_ineq_2sc(int vars, int *coeffs, int constant, int *indices){
int min, max, states, next_index, next_label, result, target, count;
long i;
unsigned long j, transitions;
struct map_ent *map;
char *statuces;
DFA *inequality, *temp;
int write1, overbits, label1, label2, co;

preprocess(vars, coeffs, &constant, 1);

//initialization

min=0;
max=0;
for (i=0; i<vars; i++)
  if (coeffs[i]>0) max+=coeffs[i];
  else min+=coeffs[i];

if (constant>max) max=constant;
else if(constant<min) min=constant;
states=max-min+1;
overbits=ceil(log(states)/log(2));
states*=2;

//This array maps state labels (carries) to state indices
map = (struct map_ent *)malloc(states*sizeof(struct map_ent)) -min;
for(i=min; i<max+1; i++){
  map[i].s=0;
  map[i].sr=0;
  map[i].i=-1;
  map[i].ir=-1;
  }

map[constant].sr=1; //the first state to be expanded
next_index=0;            //the next available state index
next_label=constant;     //the next available state label
map[constant].i=-1;
map[constant].ir=0;
count=0;

transitions=1<<vars;  //number of transitions from each state

//Begin building
dfaSetup(states, vars, indices);


while(next_label<max+1){  //there is a state to expand (excuding sink)
  if(map[next_label].i==count)
    map[next_label].s=2;
  else
    map[next_label].sr=2;
  dfaAllocExceptions(transitions);
    for(j=0; j<transitions; j++){
      co=count_ones(j,vars,coeffs);
      result=next_label+co;
      if (result>=0) target=result/2;
      else target=(result-1)/2;      
      write1=result&1;
      label1=next_label;
      label2=target;

      while(label1!=label2){
        label1=label2;
        result=label1+co;
        if (result>=0) label2=result/2;
        else label2=(result-1)/2;
        write1=result&1;
        }

      if (write1) {
        if(map[target].s==0){
           map[target].s=1;
           next_index++;
           map[target].i=next_index;
           }
        dfaStoreException(map[target].i,bintostr(j,vars));
        }
      else {
        if(map[target].sr==0){
           map[target].sr=1;
           next_index++;
           map[target].ir=next_index;
           }
        dfaStoreException(map[target].ir,bintostr(j,vars));
        }
      }
  dfaStoreState(count);
  count++;
  for(next_label=min; (next_label<=max) &&
(map[next_label].i!=count)&&(map[next_label].ir!=count); next_label++);
//find next state to expand
  }
for(i=count;i<states;i++){
  dfaAllocExceptions(0);
  dfaStoreState(i);
  }

//define accepting and rejecting states
statuces=(char *)malloc(states+1);
for(i=0;i<states;i++)
statuces[i]='-';
for(next_label=min;next_label<=max;next_label++)
  if (map[next_label].s==2) statuces[map[next_label].i]='+';
statuces[states]='\0';
temp=dfaBuild(statuces);
temp->ns-=states-count;
inequality=dfaMinimize(temp);
return inequality;
}

//recursively checks if state sa of a is equivalent to state sb of b
int check(DFA *a, DFA *b, bdd_ptr sa, bdd_ptr sb){
int leafa, leafb, nexta, nextb;
bdd_manager *abddm, *bbddm;
unsigned indexa, indexb;   

abddm=a->bddm;
bbddm=b->bddm;

leafa=bdd_is_leaf(abddm, sa);
leafb=bdd_is_leaf(bbddm, sb);

if (leafa && leafb) {     //both are leaf BDD nodes poining to next state
  nexta=bdd_leaf_value(abddm,sa);
  nextb=bdd_leaf_value(bbddm,sb);
  if (corresP[nexta]==-1){
     if (a->f[nexta]!=b->f[nextb]) return 0;
     corresP[nexta]=nextb;
     if (!check(a,b,a->q[nexta],b->q[nextb])) return 0;
     }
  else return corresP[nexta]==nextb;
  }
else if (leafa || leafb){ //one is a leaf but the other is not
  return 0;
  }
else {                    //both are internal BDD nodes
  LOAD_index(&abddm->node_table[sa], indexa);
  LOAD_index(&bbddm->node_table[sb], indexb);
  if(indexa!=indexb) return 0; 
  return check(a,b,bdd_then(abddm,sa),bdd_then(bbddm,sb)) &&
         check(a,b,bdd_else(abddm,sa),bdd_else(bbddm,sb));
  }
return 1;
}


// A DFA that accepts everything except for the null (empty) string
DFA *dfaNotNullString(){

dfaSetup(2,0,NULL);   

dfaAllocExceptions(0);
dfaStoreState(1);
dfaAllocExceptions(0);
dfaStoreState(1);
     
return dfaBuild("-+");
}


//checks if L(A)=L(B)
int dfaEquivalence(DFA *A, DFA *B){
int i, nsa, nsb;
DFA *a, *b, *temp, *t;
    
    
if ((A->f[A->s]==1)&&(B->f[B->s]==-1)){
  t=dfaNotNullString();
  temp=dfaProduct(A,t,dfaAND);
  a=dfaMinimize(temp);
  dfaFree(temp);
  dfaFree(t);
  b=dfaMinimize(B);
  }
else if ((A->f[A->s]==-1)&&(B->f[B->s]==1)){
  t=dfaNotNullString();
  temp=dfaProduct(B,t,dfaAND);
  b=dfaMinimize(temp);
  dfaFree(temp);
  dfaFree(t);   
  a=dfaMinimize(A);
  }
else{
  a=dfaMinimize(A);
  b=dfaMinimize(B);
  }

nsa=a->ns;
nsb=b->ns;
if(nsa!=nsb)
  return 0;
corresP=(int *)malloc(nsa*sizeof(int));
for(i=0;i<nsa;i++)
  corresP[i]=-1;
corresP[a->s]=b->s;
i= check(a, b, a->q[a->s], b->q[b->s]);
free(corresP);
dfaFree(a);
dfaFree(b);  
return i;
}  


