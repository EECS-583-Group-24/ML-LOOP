#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,x,y,r;

  x = 10000;
  y = 500;

  if(x<y){
    a=y;
    y=x;
    x=a;
  }
  
  while(y>0)
    {
      r=x%y;
      x=y;
      y=r;
    }

  return 0;
}
