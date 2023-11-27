#include <stdio.h>

main(){
  
  int x,y,z;
  
  scanf("%d%d",&x,&y);
  
  while(1){
    z=x%y;
    if(z==0) break;
    x = y;
    y = z;
    
  }
  printf("%d\n",y);
}