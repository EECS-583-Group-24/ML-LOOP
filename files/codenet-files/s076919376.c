#include <stdio.h>
int main(){
  int x,y,tmp,r;
  scanf("%d %d",&x,&y);
  if(x<y){
    tmp=x;
    x=y;
    y=tmp;
  }

  while(y>0){
    r=x%y;
    x=y;
    y=r;
  }
  printf("%d\n",x);
}