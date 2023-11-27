#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%111==0){
        printf("%d",a);
    } else {
        printf("%d",(a/111+1)*111);
    }
    return 0;
}
