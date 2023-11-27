/* Reversing Numbers */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int w[n], i;
    for(i=0; i<n; i++){
        scanf("%d",&w[i]);
    }
    for(i=n-1; i>=1; i--){
        printf("%d ", w[i]);
    }
    printf("%d\n", w[i]);
    return 0;
}
