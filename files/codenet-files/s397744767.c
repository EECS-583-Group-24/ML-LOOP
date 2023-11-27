#include<stdio.h>

int main() {
  
   int N[100];
   int n,i;
   
   scanf("%d\n",&n);
    
   for (i=0; i<n; i++) {
      scanf("%d",&N[ i ]);
   }
  
   for (i=n-1; i>=0; i--) {
      printf("%d",&N[ i ]); 
   }
 
   return 0;

}