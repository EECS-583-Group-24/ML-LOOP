#include <stdio.h>
#include <stdlib.h>
 
#define FOR(i,L,R) for (int i = L; i < R; i++)
#define READ(n) int (n); scanf("%d",&(n))
#define getInt(a) scanf("%d", &a)
 
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
 
int main(){
    READ(n);
    int arr[n + 1], max = 0, secMax = -1, maxCnt = 0;
    FOR(i, 0, n){
        getInt(arr[i]);
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] > secMax && arr[i] < max)
            secMax = arr[i];
    }
    
    FOR(i, 0, n)
        if (arr[i] == max)
            maxCnt++;
            
    FOR(i, 0, n){
        if (arr[i] == max && maxCnt == 1)
            printf("%d\n", secMax);
        else
            printf("%d\n", max);
    }
}