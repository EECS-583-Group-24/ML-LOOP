#include <stdio.h>
#include <stdlib.h>

int main (){
  int x,y,i,v;
  
  scanf("%d%d",&x,&y);

  if(x < 1 || y < 1 || x > 1000000000 || y > 1000000000){
    printf("Please type 1 to 1000000000.");
    exit(1);
  }

  if(x > y){
    v = x;
    x = y;
    y = v;
  }


    for(i=1; i<=x/2;i++){
      if(x%i == 0 && y%i == 0){
	v = i;
      }
    }
    if(x == y)v=x;
  
   
  printf("%d\n",v);
  
  
  return 0;
}


