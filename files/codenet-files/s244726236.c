#include<stdio.h>

int main(void)
{
    int n,n1,i,j;
    scanf("%d\n",&n);
    n1 = n - 1;
    int array[n];
    for(i = 0;i < n;i++)    scanf("%d",&array[i]);
    for(j = 0;j < n;j++,n1--)
    {
        printf("%d",array[n1]);
        if(j != n - 1)
            printf(" ");
        else    printf("\n");
    }
}
