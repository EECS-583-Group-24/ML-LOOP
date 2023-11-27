#include <stdio.h>

int main(){
  int x,y,tmp,i,res;

  scanf("%d %d", &x, &y);
  if(y>x){ // x>=y にする
    tmp=x;
    x=y;
    y=tmp;
  }
  x= x%y;
  res= y;
  //x(x&y)とyの最大公約数を求める
  for(i=x; i>0; i--) if(x%i==0 && y%i==0){
      res=i;
      break;
    }
  printf("%d\n", res);

  return 0;
}