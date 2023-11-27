#include <stdio.h>
int main(void){
  int x;
  int y;
  int i;

  scanf("%d%d",x,y);
  if(x>y){
  int max=x;
    for(i=0;i<x;i++){
      if(x%max==0&&y%max==){
        printf("%d",max);
break;
      }
      max--;
    }
  }else{
  int max=y;
    for(i=0;i<x;i++){
      if(x%max==0&&y%max==){
        printf("%d",max);
      break;
      }
      max--;
    }
  }

return 0;
}