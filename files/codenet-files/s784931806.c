#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=a-1;i>=0;i--)
    {
        if(i!=0)
            printf("%d ",x[i]);
        else
            printf("%d",x[i]);
    }
    return 0;

}

