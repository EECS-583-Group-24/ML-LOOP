#include<stdio.h>

main(){
  int a,b,c;
  while((scanf("%d %d",&a,&b))!=EOF){
    c=1;
    a=a+b;
    while(a>=10){
      a=a/10;
      c=c+1;
    }
    printf("%d\n",c);
  }
  return(0);
}