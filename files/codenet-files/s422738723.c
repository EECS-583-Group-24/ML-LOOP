#include<stdio.h>
#include<stdlib.h>

int compare_int(const void *a, const void *b){
    if ( *(int*)a > *(int*)b ) return 1;
    if ( *(int*)a < *(int*)b ) return -1;
    return 0;
}

int main(void){
    int n,i,max,j;
    scanf("%d",&n);
    int a[n];
    j = 0, max = 0;
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(max < a[i])  {
            max = a[i];
            j = i;
        }
    }

    qsort(a, n, sizeof(int), compare_int);

    for(i=0; i<n; i++){
        if(i == j ){
            printf("%d\n",a[n-2]);
        }else{
            printf("%d\n",max);
        }
    }

    return 0;
}