#include <stdio.h>

int main(void){
  int a,b;
  int sum;
  int i;
  scanf("%d%d",&a,&b);
  while(a != -1 && b != -1){
    sum=a+b;
    i=10;
    for(i=0;sum!=0;i++){
      sum /= 10;
    }
    printf("%d\n",i);
    scanf("%d%d",&a,&b);
  }
  return 0;
}