#include<stdio.h>

int main(){
    int N, i, j;
    int A[200000];
    int mem[200000];
    int tmp;

    scanf("%d", &N);
    for (i = 0; i < N;i++){
        scanf("%d", &A[i]);
        mem[i] = 0;
    }

    for (i = 0;i<N;i++){
        tmp = 0;
        if(i==1&&mem[0]!=A[i]){
            mem[i] = mem[0];
            continue;
        }
        else if(i>1&&mem[i-1]!=A[i]){
            if(A[i-1] != mem[i-2]){
                mem[i] = mem[i - 1];
            }
            else{
                mem[i] = mem[i - 2];
            }
            continue;
        }
        if(i == 0){
            tmp = A[1];
        }
        else{
            tmp = A[0];
        }
        for (j = 0; j < N; j++){
            if(j!=i){
                if(tmp<A[j]){
                    tmp = A[j];
                }
            }
        }
        mem[i] = tmp;
    }
    for (i = 0; i < N;i++){
        printf("%d\n", mem[i]);
    }
    return 0;
}