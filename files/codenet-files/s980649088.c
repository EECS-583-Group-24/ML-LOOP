#include<stdio.h>

int gcd(int,int);

int main()
{
  int x,y;

  /* 入力 */
  scanf("%d%d",&x,&y);
  /* 出力 */
  printf("%d\n",gcd(x,y));
  return 0;
}

/* 関数gcd 最大公約数を求める */
int gcd(int x,int y)
{
  int d;
  int temp;
  if(x<y){
    temp = x;
    x=y;
    y=temp;
  }
  while(y>0){
    d = x % y;
    x = y;
    y = d;
  }
  return x;
}

