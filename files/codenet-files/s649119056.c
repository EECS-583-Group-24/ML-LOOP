#include <stdio.h>

int y_g(int ,int );

int main()
{
  int x,y;
  
  scanf("%d%d",&x,&y);
  printf("%d\n",y_g(x,y));

  return 0;
}

int y_g(int x,int y)
{
  if(x%y==0) return y;
  else return y_g(y,x%y);
}
  

