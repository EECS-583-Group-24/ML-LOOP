#include <stdio.h>

int main(){
  int a,b,c;
  a = 23;
  b = 34;
    while(a%b!=0){
      c=a%b;
      a=b;
      b=c;
    }
  printf("%d\n",b);
}