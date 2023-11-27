/*s1190073  Rina Sato,
File name:prog1b.c,
2012 4/18(Wed),
This is a program which finds the greatest common divisor.*/

#include<stdio.h>
int main(void){
  int a,b,c,m,n;
  
  scanf("%d%d",&a,&b);
    
  if(a < b){
    m = a;
    n = b;
  }
  else {
    m = b;
    n = a;
  }
  
  /*use Ecclidean geometry*/
  while(1){
    c = m % n;
    if(c == 0) break;
    else {
      m = n;
      n = c;
    }
    
  }
  printf("%d\n",n);
  return 0;
}