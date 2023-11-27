#include <stdio.h>
int main()
{
  int n;
  int a,b,c;
  
  scanf("%d",&n);
  a=(int)(n/100);
  b=(int)((n-100*a)/10);
  c=(int)(n-100*a-10*b);
  
  if(a==1)a=9;
  else if(a==9)a=1;
  
  if(b==1)b=9;
  else if(b==9)b=1;
  
  if(c==1)c=9;
  else if(c==9)c=1;
  
  printf("%d",100*a+10*b+c);
}