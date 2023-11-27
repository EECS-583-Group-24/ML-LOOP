#include<stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d%d%d%d",&x,&y,&a,&b);
    printf("%lf ",(double)((x*y)/2));
    if(a*2==x&&b*2==y)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
