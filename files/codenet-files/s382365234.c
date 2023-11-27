#include <stdio.h>

main()
{
  int a, b, n;

  scanf("%d %d", &a, &b);

  if(a > b)
    {
      while(b != 0)
	{
	  n = a % b;
	  a = b;
	  b = n;
	}
      n = a;
    }

  if(b > a)
    {
      while(a != 0)
	{
	  n = b % a;
	  b = a;
	  a = n;
	}
      n = b;
    }

  printf("%d\n", n );
  return 0;
}