#include <stdio.h>

main(){
  int a,b,c;
  
  scanf("%d%d",&a,&b);
    while(a%b!=0){
      c=a%b;
      a=b;
      b=c;
    }
  printf("%d\n",b);
}