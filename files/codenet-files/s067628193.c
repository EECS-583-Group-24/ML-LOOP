#include <stdio.h>

int main(){
  int x,y,n,yaku,i,kari,memo;
  scanf("%d%d",&x,&y);

  if(y>=x){
    kari=x;
    x=y;
    y=kari;
  }
  while(1){
    memo=y;
    y=x%y;
    if(y==0){
      yaku=memo;
      break;
    }
    x=memo;
  }
  printf("%d\n",yaku);
  return 0;
}
    
  
  

