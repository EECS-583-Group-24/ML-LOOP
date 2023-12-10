#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,x,y,r;
  a = -1;
  r = -1;
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

  printf("%d %d %d %d\n", a,x,y,r); 
  return 0;
}
