#include <stdio.h>
int main(){
int n, i, a[100];
scanf("%d", &n);
for ( i = 0; i < n; i++ ){
scanf("%d", &a[i]);
}
for ( i = n - 1; i >= 0; i-- ){
if ( i = n - 1 )
printf("%d", a[i]);
else
printf(" %d", a[i] );
}
printf("\n");
return 0;
}
