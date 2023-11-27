#include <stdio.h>

int main(){

  int x,y,i,d;

  while(1){
    scanf("%d %d", &x,&y);
    if(x>=1 && y<=1000000000)break;
    }

  if(x>=y){
    d=x%y;
    for(i=d ; i>0 ; i--){
      if(y%i==0 && d%i==0)break;
    }
  }
  else {
    d=y%x;
    for(i=d ; i>0 ; i--){
      if(x%i==0 && d%i==0) break;
    }
  }
 
  printf("%d\n", i);

  return 0;
}