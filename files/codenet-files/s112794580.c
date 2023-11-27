#include<stdio.h>
int main()
{
    int n,b;
    scanf("%d",&n);
    int a[n];
    for(b=0;b<n;b++)
    scanf("%d",&a[b]);
    for(b=n-1;b>0;b--)
    {
     printf("%d ",a[b]);
     }
     printf("%d\n",a[0]);
     return 0;
}

