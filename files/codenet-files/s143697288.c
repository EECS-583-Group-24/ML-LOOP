#include <stdio.h>
main(){
  int a,b,c;
  scanf("%d %d",&a,&b);
  while(1){
    if(b > a){
      a = b;
    }
    if(b > 1 && b < a){
      c = a % b;
      a = b;
      b = c;
    }
    if(a % b == 0) break;
  }
  printf("%d\n",b);
  return 0;
}