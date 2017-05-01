#include <stdio.h>
#include "include/GreedyKnapsack.h"
int main(void)
{   int m=50,n=5,i;
    double answer;
    int w[20]={25,50,16,24,30};
	  int v[20]={20,25,32,24,16};
    MergeSort(w,v,1,n);
    answer=GreedyKnapsack(n,w,v,m);
    printf("%f",answer);
    return 0;
}
