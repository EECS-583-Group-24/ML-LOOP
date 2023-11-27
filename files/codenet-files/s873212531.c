#include <stdio.h>
#include <stdlib.h>
int main(void){
    // Your code here!
    int N,A,max = -1,semimax = -2,maxindex = 0;
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
    {
        scanf("%d",&A);
        if(A > max)
        {
            semimax = max;
            max = A;
            maxindex = i;
        }
        else if(A > semimax)
        {
            semimax = A;
        }
    }
    for(int i = 0; i < N; i++)
    {
        if(i == maxindex)
            printf("%d\n",semimax);
        else
            printf("%d\n",max);
    }
}
