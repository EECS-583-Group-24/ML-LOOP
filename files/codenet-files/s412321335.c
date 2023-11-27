#include<stdio.h>

int main(){

  int x,y,r,d;


  scanf("%d%d", &x,&y);
  
 if(x<y){
    d = x;
    x = y;
    y = d;
  }


  r = x % y;
  while(r!=0){
    x = y;
    y = r;
    r = x % y;
  }

  printf("%d\n",y);

  return 0;
}



  

