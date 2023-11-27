#include<stdio.h>
//using namespace std;
int main()
{
  long w,h,x,y;
  scanf ("%ld%ld%ld%ld", &w, &h, &x, &y);
  if (2*x==w && 2*y==h)
  {
    printf("%.6f 1", ((float)w/2)*h);
  }
  else 
    {
      printf("%.6f 0", ((float)w/2)*h);
    }
  return 0;
}