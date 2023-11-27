#include<stdio.h>
int main(){

  int x,y,r;

  scanf("%d%d",&x,&y);
 
  while(x%y!=0){
    r=x%y;
    x=y;
    y=r;
  }
  printf("%d\n",y);
  return 0;
}

