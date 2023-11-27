#include<stdio.h>

int main(){
	long int W,H,X,Y;
    double a;
  int b;
  scanf("%ld %ld %ld %ld",&W,&H,&X,&Y);
  if(X*2==W && Y*2==H)b=1;
  else b=0;
	a=double(W)*double(H)/2;
  printf("%lf %d",a,b);
  return 0;
}