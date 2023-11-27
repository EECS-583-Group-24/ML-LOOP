#include<stdio.h>
main(){
  int a,b,i,sum;
  while(scanf("%d %d",&a,&b)!=EOF){
    sum=a+b;
    for(i=1;sum>1;i++)
      sum=sum/10;
    printf("%d\n",i);
  }
  return(0);
}