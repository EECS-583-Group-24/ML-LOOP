#include<stdio.h>
int main(void)
{
    int a,b,i,keta;
    while(scanf("%d %d",&a,&b)!=EOF){
    keta=a+b;
    if(0<=keta&&keta<10){
        printf("1\n");
    }else if(10<=keta&&keta<100){
        printf("2\n");
    }else if(100<=keta&&keta<1000){
        printf("3\n");
    }else if(1000<=keta&&keta<10000){
        printf("4\n");
    }else if(10000<=keta&&keta<100000){
        printf("5\n");
    }else if(100000<=keta&&keta<1000000){
        printf("6\n");
    }else{
        printf("7\n");
    }
    }
    return 0;
}