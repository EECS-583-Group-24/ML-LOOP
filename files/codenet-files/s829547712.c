#include <stdio.h>
int main(){

    int n;
    int a[200000];
    //input
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    //calc

    int max =0;
    int semimax =0;
    for(int j=0; j<n; j++){
        if(max <a[j]){
            max =a[j];
        }else if(semimax < a[j]){
            semimax =a[j];
        }   
    }
    //output
    for(int i=0; i<n; i++){
        if(max ==a[i]){ //a[i] is biggest
            printf("%d\n", semimax);
        }else{        //a[i] is not biggest
            printf("%d\n", max);
        }
    }



    return 0;
}
