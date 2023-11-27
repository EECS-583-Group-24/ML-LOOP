#include<stdio.h>

int main(){
    int i, j, k;
    int N, A[210000];
    int maxl[210000], maxr[210000];

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    maxl[0]=A[0];
    maxr[N-1]=A[N-1];
    for(i=1; i<N; i++){
        if(maxl[i-1]>A[i]){
            maxl[i]=maxl[i-1];
        }else{
            maxl[i]=A[i];
        }
    }
    for(i=N-2; i>=0; i--){
        if(maxr[i+1]>A[i]){
            maxr[i]=maxr[i+1];
        }else{
            maxr[i]=A[i];
        }
    }

    for(i=0;i<N;i++){
        if(i==0){
            printf("%d\n", maxr[i+1]);
        }else if(i==N-1){
            printf("%d\n", maxl[N-2]);
        }else{
            if(maxl[i-1]>maxr[i+1]){
                printf("%d\n",maxl[i-1]);
            }else{
                printf("%d\n", maxr[i+1]);
            }
        }
    }

    return 0;
}