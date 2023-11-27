#include <stdio.h>
int main(){
    int n;
    scanf("%d¥n", &n);
    
    if(n>=111 && n<= 999){
        if(n%10 == 1){
            n+=8;
        } else{
            n-=8;
        }
        if(n%10%10 == 1){
            n+=80;
        } else{
            n-=80;
        }
        if(n%100%10 == 1){
            n+=800;
        } else{
            n-=800;
        }
        
    }
    printf("%d", n);
    return 0;
}
