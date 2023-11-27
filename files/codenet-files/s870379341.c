#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}

int main(void)
{
    int N;
    int A[200000],B[200000];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        scanf("%d", &A[i]);
        B[i]=A[i];
    }
    qsort(A,N,sizeof(int),cmp);
    int a;
    for(int i=0;i<N;i++){
        if(A[0]!=A[i]){
            a=A[i];
            break;
        }
    }
    if(a==0) a=A[0];
    for(int i=0;i<N;i++){
        if(A[0]!=B[i]) printf("%d\n",A[0]);
        else printf("%d\n",a);
    }
}
