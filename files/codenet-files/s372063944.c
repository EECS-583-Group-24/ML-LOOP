#include <stdio.h>
int main(){
  int a,b;
  int c=0;
  scanf("%d %d",&a,&b);
  if(a>b){
    while(b!=0){
      c=a%b;
      a=b;
      b=c;
    }
  }
  if(a<b){
    while(b!=0){
      c=b%a;
      b=a;
      a=c;
    }
  }
  printf("%d\n",a);
  return 0;
}