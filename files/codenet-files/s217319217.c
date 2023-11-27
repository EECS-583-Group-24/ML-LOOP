#include <stdio.h>
int main(void){
    int N,i,j,big=0,next = 0,n=1,num,m = 0;
    scanf("%d\n",&N);
    for (i=0;i<N;i++){
        scanf("%d\n",&num);
        if(i==0){
            big = num;
        }
        if (num>big){
            next = big;
            big = num;
            m = n;
        }
        if ((void)(num>next),num<big){
            next = num;
        }
        n += 1;
        
    }
    if(big==next){
        for(j=1;j<N+1;j++){
            printf("%d\n",big);
        }
    }else{
        for(j=1;j<N+1;j++){
            if(j==m){
                printf("%d\n",next);
            }else{
                printf("%d\n",big);
            }
        }
    }
    return 0;
}
