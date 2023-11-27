#include <stdio.h>
int main(){
  int a,b,c;
  scanf("%d%d",&a,&b);
  while((c=a%b)!=0){
    a=b;
    b=c;
  }
  printf("%d\n",b);
  return 0;
}
