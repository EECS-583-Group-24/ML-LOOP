#include <stdio.h>

int main()
{
    int n,a[200000];
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int max1 = 0,max2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[max1] < a[i])
        {
            max2 = max1;
            max1 = i;
        }
        else if(a[max2] < a[i])
        {
            max2 = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",i == max1 ? a[max2] : a[max1]);
    }
    
}
