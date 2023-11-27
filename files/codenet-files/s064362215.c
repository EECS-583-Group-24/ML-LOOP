#include<stdio.h>
int main(){
    int i,j;
    int a,b,c,count=0;
    scanf("%d %d",&a,&b);
    c=a+b;
    for(;;){
        c=c/10;
        count++;
        if(c>=0&&c<10){
            count++;
            break;
        }
    }
    printf("%d\n",count);
}