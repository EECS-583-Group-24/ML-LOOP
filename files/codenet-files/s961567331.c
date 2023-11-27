#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b){
    return *(int *)b - *(int *)a;
}
int findmax(int a[], int n, int b){
    int i=0;
    qsort(a,n,sizeof(int),cmp);
    if(a[i] == b){
        while(a[i] ==b) i++;
    }
    return a[i];
}
int main(void)
{
    int N;
    int A[200000],B[200000];
    scanf("%d", &N);
    for(int i=0;i<N;i++) scanf("%d", &A[i]);
    for(int i=0;i<N;i++) B[i]=A[i];
    int ans;
    for(int i=0;i<N;i++){
        ans=findmax(A,N,B[i]);
        printf("%d\n",ans);
    }
}
