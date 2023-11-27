#include<stdio.h>
int main()
{
    int N,A,B,s=0;
    scanf("%d",&N);
    if(N==1)
    {
        printf("Hello World\n");
    }
    else if(N==2)
    {
        scanf("%d%d",&A,&B);
        s=A+B;
        printf("%d\n",s);
    }
    return 0;
}
