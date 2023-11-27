#include <stdio.h>

int gcd(int,int);

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d\n",gcd(a,b));

  return 0;
}

int gcd(int x,int y)
{
  return y ? gcd(y,x%y):x;
}
