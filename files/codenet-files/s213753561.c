#include<stdio.h>

int main(){
  int cen,x,y,r;

  scanf("%d %d",&x,&y);

  if(x<y){
    cen = x;
    x = y;
    y = cen;
  }
  r = x % y;
  while(r!=0){
    x = y;
    y = r;
    r = x % y;
  }

  printf("%d\n",y);
return 0;
}