#include<stdio.h>

int main(){
  int y,x,d;

  scanf("%d%d",&x,&y);


    while(d!=0){
      d=x%y;
      x=y;
      y=d;
}


    printf("%d\n",x);

  return 0;
}