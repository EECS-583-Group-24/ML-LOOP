#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
        for(i=n-1;i>=1;i--){
            printf(" %d",a[i]);
        }

    printf("%d\n",a[0]);
    return 0;
}

