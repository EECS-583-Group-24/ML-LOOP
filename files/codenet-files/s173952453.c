#include <stdio.h>

main(){
  int x,y,z;
  scanf("%d%d",&x,&y);
  while(y != 0){
    z = x%y;
    x = y;
    y = z;
  }
  printf("%d\n",x);
    
}