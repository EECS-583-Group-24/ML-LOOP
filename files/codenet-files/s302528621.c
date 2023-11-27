#include<stdio.h>
int main(void)
{
    int a,b,c,d,count=0,i=0;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a+b;
    for(i=0;i<1000;i++){
    c=c/10;
    count++;
    if(c<1)break;
    }
    printf("%d\n",count);
    return 0;
}