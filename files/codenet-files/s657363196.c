#include<stdio.h>

int main(){
  int n,m;
  int a,b,c;
  scanf("%d", &n);
  a=n%10;
  b=(n/10)%10;
  c=(n/100)%10;
  if(a==1) a=9;
  else a=1;
  if(b==1) b=9;
  else b=1;
  if(c==1) c=9;
  else c=1;
  m=a+10*b+100*c;
  printf("%d\n", m);
  return 0;
}
