#include <stdio.h>
int main (void){
  int n;
  int x[1000];
  int i;
  int z;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d",&x[i]);
   }
  for(z=1; z<=n; z++){
    if(z==n){printf("%d\n",x[i-z]);}
    else{printf("%d ",x[i-z]);}
  }
return 0;
    }