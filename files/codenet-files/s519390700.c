#include<stdio.h>

int main(void){
   int x,y;
   scanf("%d %d",&x,&y);

   if(x<y){
      swap(x,y);
   }
   while(y>0){
      r=x%y;
      x=y;
      y=r;
   }
  printf("%d",x);

  return 0;
}
