#include <stdio.h>

main() {
    int n;
    scanf("%d",&n);
    printf("%d",(n/100==1?900:100)+(n/10%10==1?90:10)+(n%10==1?9:1));
}