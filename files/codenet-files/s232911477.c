#include <stdio.h>

int main(){
  int x,y,c;

  scanf("%d %d",&x,&y);

  while(x%y!=0){
    c=x%y;
    x=y;
    y=c;
  }
  printf("%d\n",y);
  return 0;
}