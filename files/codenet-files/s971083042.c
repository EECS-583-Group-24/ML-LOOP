#include <stdio.h>
int main(void)
{
  int x,y,r;
  scanf("%d %d",&x,&y);
  
  if(x>y){
  while(y>0){
    r=x%y;
    x=y;
    y=r;
   
    return x;
    }
  }

   else if(y>x){
  while(y>0){
    r=y%x;
    y=x;
    x=r;
   
    return y;
    }
  }
    printf("%d",r);

  return 0;
    
}