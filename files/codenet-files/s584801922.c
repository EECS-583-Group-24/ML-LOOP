#include<stdio.h>
int main(void){
  int n, m,l;
  scanf("%d",&n);
  if(n / 100 == 1){
    m += 900;
  }
  else{
    m+= 100;
  }
  n -= m;
  if(n / 10 == 1){
    l += 90;
  }
  else{
    l += 10;
  }
  n -= l;
  if(n == 1){
    printf("%d\n",m+l+9);
  }
  else{
    printf("%d\n",m+l+1);
  }
  
  return 0;
}