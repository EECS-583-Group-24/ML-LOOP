#include <stdio.h>

int main(){
  int x,y,d,remain,pregcd=0,gcd=0,i;
  scanf("%d %d",&x,&y);

  remain=x%y;
  if(x>=remain){
    d=x;
  }
  else{
    d=remain;
  }

  remain=x%y;

  for(i=1;i<=d;i++){
    if(x%i==0 && remain%i==0){
      pregcd=i;
    }
    else {
      continue;
    }

    if(gcd<pregcd){
      gcd=pregcd;
    }
  }

  printf("%d\n",gcd);

  return 0;
}