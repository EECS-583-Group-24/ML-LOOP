#include<stdio.h>
int main(void)
{
    int a,b,c=1,d=0;
    while(scanf("%d %d",&a,&b)!=EOF){
        c=1,d=0;
        while(1){
            c=10*c;
            d++;
            if((a+b)/c==0){
                printf("%d\n",d);
                break;
            }
        }
    }
    return 0;
}