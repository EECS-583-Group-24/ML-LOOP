#include <stdio.h>

int main(){
  
  int x,y,tmp,num,amari;

  scanf("%d%d",&x,&y);

  if( x < y){
    tmp = x;
    x = y;
    y = tmp;    
      }
  
  num = x%y;

  //numとyの最大公約数を求める。
  
  while(num != 0){
    amari  =  y % num;
    y = num;
    num = amari;
    if(amari ==0)break;
  }
  printf("%d\n",y);
  
  return 0;
}

