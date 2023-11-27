#include <stdio.h>

int main(){
  int x,y,k,i,j;

  scanf("%d%d",&x,&y);

  if(x > y){
    i = x;
    j = y;
  }
  else {
    i = y;
    j = x;
  }

  while(j != 0){
    k = j;
    j = i%j;
    i = k;
  }

  printf("%d\n",i);

  return 0;
}