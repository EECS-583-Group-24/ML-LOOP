#include <stdio.h>
int main(){
  long w,h,x,y;
  scanf("%ld %ld %ld %ld",&w,&h,&x,&y);
  
  if(x==w/2 && y==h/2){
    printf("%ld 1",(w*h)/2);
  }else{
    printf("%ld 0",(w*h)/2);
  }
  
  return 0;
}
