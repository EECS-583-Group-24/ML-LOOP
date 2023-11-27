#include<stdio.h>
int main()
{
    int n;
    int ar[200006];
    int i,l,j;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for(i=0; i<n; i++)
    {
        l= 0;
        for(j=0; j<n; j++)
        {
            if(j!=i)
            {
                if(ar[j]>l)
                {
                    l=ar[j];
                }
            }

        }
        printf("%d\n", l);
    }
}
