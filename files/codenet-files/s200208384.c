#include <stdio.h>
int main (void){

  int n = 0 ,a100 = 0,a10 = 0,a1 = 0; 

  scanf("%d", &n);

  a100 = n/100;
  a10 = (n%100)/10;
  a1 = n%10;

  
  
  if(a100 == 1){
    a100 = 9;
  }else if(a100 == 9){
    a100 = 1;
  }
  
  if(a10 == 1){
    a10 = 9;
  }else if(a10 == 9){
    a10 = 1;
  }
  
  if(a1 == 1){
    a1 = 9;
  }else if(a1 == 9){
   a1 = 1;
  }


  
  printf("%d%d%d\n",a100,a10,a1);

  return 0;
}
