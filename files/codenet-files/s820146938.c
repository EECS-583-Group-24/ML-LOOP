#include<stdio.h>

int main(){
  long x,y;
  scanf("%d %d",&x,&y);
  while(x % y >0)
    y = x % y;
  printf("%d\n",y);
}

