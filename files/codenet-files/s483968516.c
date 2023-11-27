#include <stdio.h>

#define MAX 100000

int main (void)
{
  int i,j=0,a,b,x,y,d[MAX],gcd;
  
  scanf ("%d %d",&x,&y);
  
  if (x > y){
    a = y;
    b = x;
  }else{
    a = x;
    b = y;
  }
  if (a == b) gcd = a;
  else{
    for (i = 1 ; i <= (b % a) ; i++){
      if ((b % a) % i == 0){
	d[j] = (b % a)/i;
	j++;
      }
    }
    for (j = 0 ; j <= (b % a) ; j++){
      if (d[j] <= a && a%d[j] == 0){
	gcd = d[j];
	break;
      }
      else continue;
    }
  }