#include <stdio.h>
#include <stdlib.h>
int main(void){
    int N;
    int *A;
    scanf("%d", &N);
    A = (int *)calloc(N, sizeof(int));
    for(int i=0; i<N; i++)
        scanf("%d", &A[i]);
    int max=0;
    for(int i=0; i<N; i++){
        if(A[i] >= max){
            max = 0;
            for(int j = 0; j<N; j++){
                if(j==i)continue;
                if(A[j]>max)
                    max = A[j];
            }
        }
        printf("%d\n", max);
    }
    return 0;
}