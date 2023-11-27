#include<stdio.h>
int main(void)
{
    int n,a[200000],c[200000],t,i,j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        c[i]=a[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=n-1; j>=i+1; j--)
        {
            if(c[j]>c[j-1])
            {
                t=c[j];
                c[j]=c[j-1];
                c[j-1]=t;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=c[0])
        printf("%d\n", c[0]);
        else
        printf("%d\n", c[1]);
    }
    
    return 0;
}