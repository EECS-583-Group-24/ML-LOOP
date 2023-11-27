#include<stdio.h>

int main(void)
{
int m, n, r;

scanf("%d %d", &m, &n);
for(r = m % n; r; r = m % n){
m = n;
n = r;
}
printf("%d\n", n);
return 0;
}