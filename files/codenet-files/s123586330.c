#include <stdio.h>

int main()
{
    int n,i;
    int a[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i-1]);
    }
    for(i=n;i>0;i--)
    {
        printf("%d ",a[i-1]);
    }
    printf("\n");
    return 0;
}