#include <stdio.h>
int main(){
  int x,y,temp;

  scanf("%d%d",&x,&y);

  while(x%y!=0){
    temp=x%y;
    x=y;
    y=temp;
  }
  printf("%d\n",y);
  
  return 0;
}

