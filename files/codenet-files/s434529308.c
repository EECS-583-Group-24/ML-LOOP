#include <stdio.h>

int main(void){
  int i,a,b;
  int c,count;
  count=1;
  while((scanf("%d %d",&a,&b)!=0)){
    c=a+b;
    while(c!=0){
      c=c/10;
      count++;
    }
    printf("%d\n",count);
    count=1;
  }
  return 0;
}