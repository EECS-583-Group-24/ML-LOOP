#include <stdio.h>
main(){
  int a,b,c,count,n;
  n=0;
  while(scanf("%d%d",&a,&b) !=EOF){

  c=a+b;
  count=0; 
 while(c>0){
    c/=10;
    count++;
  }
  printf("%d\n",count);
  n++;
  }
return 0; 
}