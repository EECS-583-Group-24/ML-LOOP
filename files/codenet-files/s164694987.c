#include <stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  (a/100==1)?a=a+800:a=a+800;
  ((a/10)%10==1)?a+=80:a-=80;
  (a%10==1)?a+=8:a-=8;
  printf("%d",a);
  return 0;
}