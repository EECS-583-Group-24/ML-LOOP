#include<stdio.h>

int main(void){
    int N;
    int i,j;

    scanf("%d",&N);

    int A[N];

    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }

    for(i=0;i<N;i++){
        int max=0;
        for(j=0;j<N;j++){
            if(max<A[j] && i!=j){
                max=A[j];
            }
        }
        printf("%d\n",max);
    }

    return 0;
}