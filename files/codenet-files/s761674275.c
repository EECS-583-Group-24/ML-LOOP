#include <stdio.h>

int main(){
  int x,y,tmp,i;

  scanf("%d %d", &x, &y);
  if(y>x){ // x>=y にする
    x=tmp;
    x=y;
    y=tmp;
  }
  x= x%y;

  //x(x&y)とyの最大公約数を求める
  for(i=x; i>0; i--) if(x%i==0 && y%i==0) break;
  printf("%d\n", i);

  return 0;
}