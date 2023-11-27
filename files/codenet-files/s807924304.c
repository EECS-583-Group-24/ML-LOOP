#include<stdio.h>
int main(void){
  int i,j;
  scanf("%d",&i);
  if (i%10==9){
    i-=8;
  }else if (i%10==1){
    i+=8; 
  }
  j=i/100;
  if (j==9){
    i-=800;
  }else if (j==1){
    i+=800; 
  }
  j=(i/10)%10;
  if (j==9){
    i-=80;
  }else if(j==1){
    i+=80;
  }
  printf("%d",i);
  return 0;
}
