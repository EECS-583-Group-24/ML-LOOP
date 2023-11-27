#include <stdio.h>

int main(void)
{
    int a[1000], b[1000], i, j, n;
    
    scanf("%d", &n);
    for(i=0; i < n; i++)
    { 
        scanf("%d", &a[i]); 
        b[n-i-1] = a[i];
    }
    
    for(j=0; j < n ; j++)
    { 
        printf("%d", b[j]);
        if(j!=n)
            printf(" ");
    }
    
    printf("\n");
    return 0;
    
}
