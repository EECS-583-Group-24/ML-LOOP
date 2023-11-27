#include <stdio.h>

int main(void){
  int H,W;
  scanf("%d%d",&H,&W);

  int x,y;
  scanf("%d%d",&x,&y);

  int ans = 0;
  if(x*2 == W && y*2 == H) ans = 1;

  printf("%.9lf %d",(double)(H*W)/2,ans);

  return 0;
}