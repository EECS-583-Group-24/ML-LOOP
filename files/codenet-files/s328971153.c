#include <stdio.h>
int main(){
int n, i, a[i], m;
scanf ("%d", &n);
m = n / 2;
for ( i = 1; i < n + 1; i++ ){
scanf("%d", &a[i]);
}
for ( i = 1; i < m +1; i++){
int temp = a[i];
a[i] = a[n - i + 1];
a[n - i + 1] = temp;
}
for ( i = 1; i < n + 1; i++){
printf(" %d", a[i]);
}
printf("\n");
return 0;
}


