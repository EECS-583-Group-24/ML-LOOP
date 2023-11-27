#include <stdio.h>

int main()
{
  int a,b;
  scanf("%d",&b);
  while(a == 0)
  {
    a = b % 10;
  	if (a == 1)
  	  printf("9");
  	else
      printf("1");
    a /= 10;
  }
    
}