#include<stdio.h>
int main(){
  int a,b;
  int i=0;
  int num=1;
  while(1){
    scanf(" %d",&a);
    if(a==EOF){
      break;
    }
    scanf(" %d",&b);
    do{
      num=num*10;
      i++;
    }while(num<=a+b);
    printf("%d\n",i);
  }
  return(0);
}