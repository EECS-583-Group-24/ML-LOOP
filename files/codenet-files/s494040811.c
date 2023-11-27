#include <stdio.h>

int main(void)
{

  int a, b, c, d;


  scanf("%d %d", &a, &b);

  /* 自然数 a > b を確認・入替 */
  if(a<b){
    c = a;
    a = b;
    b = c;
  }

  /* ユークリッドの互除法 */
  d = a % b;
  while(d!=0){
    a = b;
    b = d;
    d = a % b;
  }

  /* 最大公約数を出力 */
  printf("%d\n",b);

  return 0;
}

