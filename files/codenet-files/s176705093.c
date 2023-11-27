#include <stdio.h>
#include <stdlib.h>

int gcd(int,int);
void swap(int *,int *);

int main()
{
  int x,y,ans;

  scanf("%d%d",&x,&y);
  ans=gcd(x,y);

  printf("%d\n",ans);

  return 0;
}

int gcd(int x,int y)
{
  int r;

  if( x<y )
    {
      swap( &x,&y );
    }

  while( y>0 )
    {
      r=x%y;
      x=y;
      y=r;
    }

  return x;
}

void swap(int *x,int *y)
{
  int r;
  r=*x;
  *x=*y;
  *y=r;
}


