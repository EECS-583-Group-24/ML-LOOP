#include<stdio.h>

int main(){
  int x,y,t;
  scanf("%d %d",&x,&y);
  t = x % y;
  while(t != 0){
    x = y;
    y = t;
    t = x % y;
  }
  printf("%d\n",y);

  return 0;
}

