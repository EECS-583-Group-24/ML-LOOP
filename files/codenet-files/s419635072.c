#include <stdio.h>
int main (void)
{
  int n = 0; 
  int a = 0;　
  int b = 0;
  int i = 0;
  int hai[250000];
  int max = 0;
  
  max = hai[0];
  
  scanf("%d",&n);
  
  for(a=1;a <= n;a++){
    scanf("%d",&b);
    hai[a]=b;
  }
  for(i=1;i<=n;i++){
    hai[250000]-=hai[i];
     for(a=1;a <= n-1;a++){
       if(hai[a]>max){
         max=hai[a];
       }
     }
  }
  return 0;
}
  