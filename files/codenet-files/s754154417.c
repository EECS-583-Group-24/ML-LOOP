#include <stdio.h>

int main(void)
{
  int x,y;
  int d=1;
  int i;
  int che;
  int min;
  
  scanf("%d%d",&x,&y);

  if(x > y){
    che = (x%y);
    min = y;
  }else{
    che = (y%x);
    min = x;
  }
  
  for(i=0; i<min; i++){
    if(((min%i) == 0) && ((che%i) == 0 )){
      d = i;
    }
    
  }  
  printf("%d\n",d);
  
  return(0);
}