#include <stdio.h>
int main()
{
  int x,y,d,a;
  scanf("%d%d",&x,&y);
  //x>yであるために
  if(x<y){
    a = x;
    x = y;
    y = a;
  }
  //互除法
  d = x % y;
  while(d!=0){
    x = y;
    y = d;
    d = x % y;
  }
  printf("%d\n",y);
return 0;
}
