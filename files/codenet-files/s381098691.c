#include <stdio.h>

int main()
{
 int a,b,S,i,x;
 scanf("%d%d",&a,&b);
 if(a>=b)
 {
  x=a;
  a=b;
  b=x;
 }
 while(b>0)
 {
  x=a%b;
  a=b;
  b=x;
 }
 printf("%d\n",a);
 return 0;
}