#include <stdio.h>

int main(){
    int n, m;
    scanf("%d", &n);
    int input[n];
    for (m=0; ++m<=n;)
        scanf("%d", &input[m-1]);
    printf("%d", input[n-1]);
    for (m=n-1; --m>=0;)
        printf(" %d", input[m]);
    printf("\n");
}

