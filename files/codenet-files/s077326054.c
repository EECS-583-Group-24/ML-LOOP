#include <stdio.h>

int main(){
    int n[10];
    int i,j,k,l,temp;

    for(i=0;i<10;i++){
        scanf("%d",&n[i]);
    }

    for(j=0; j<10; j++){
        for(k=j+1; k<10; k++){
            if(n[j] > n[k]){
                temp = n[j];
                n[j] = n[k];
                n[k] = temp;
            }
        }
    }
    for(l = 9; l >= 7; l--){

        printf("%d\n",n[l]);
    }
    
     return 0;

}