#include <stdio.h>
main(){
  int a,b,c,count,n;
  while(1){
    if(a==0) break;
  n=0;
  scanf("%d%d",&a,&b);
  c=a+b;
  count=0; 
 while(c>0){
    c/=10;
    count++;
  }
  printf("%d\n",count);
  }
return 0; 
}