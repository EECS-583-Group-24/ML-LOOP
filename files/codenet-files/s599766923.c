#include <stdio.h>

int main(){

  int a,b;
  int g;

  scanf("%d %d",&a,&b);
  g = gcd(a,b);
  printf("%d\n",g);

}

int gcd(int a, int b){

  int c = a%b;
  if(c==0)return b;
  else gcd(b,c);

}