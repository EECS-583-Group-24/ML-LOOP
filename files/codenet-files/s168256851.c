#include<stdio.h>

 int main (void){

 int i, n;

 scanf("%d",&n);

 int a[n];

 for(i = n - 1; i >= 0; i--)
scanf("%d", &a[i]);
 for(i = 0; i <= n - 1; i++){
 printf("%d", a[i]);
 if(i < n)
 printf(" ");
 }
 printf("\n");
 return 0;
 }
