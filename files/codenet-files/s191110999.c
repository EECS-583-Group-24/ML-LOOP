#include <stdio.h>
#include<stdlib.h>

int main()
{

  int x,y,z,res;

  scanf("%d %d",&x,&y);

  if(x<1 || y>1000000000) exit(2);

  if(x<y){
    z=x;
    x=y;
    y=z;
  }

  res = x%y;
  while(res!=0){
    x=y;
    y=res;
    res = x%y;
  }
  printf("%d\n",y);

  return 0;
}

