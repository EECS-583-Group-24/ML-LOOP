#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,x,y,r;

  scanf("%d%d",&x,&y);
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

  printf("%d\n",x);

  return 0;
}
