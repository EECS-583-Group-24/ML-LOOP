#include <stdio.h>

int main(){
 int n, i;
 int array[100];

 scanf("%d", &n);

 for(i = 0; i<n; i++){
  scanf("%d", &array[i]);
 }

 for(i = 0; i<n-1; i++){
  printf("%d ", array[n-i-1]);
 }

 printf("%d" array[n-1]);

 return 0;
}