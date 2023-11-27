#include <stdio.h>

void gcd(int,int);

int main(){
  int x,y;

  scanf("%d %d",&x,&y);
  gcd(x,y);
  
  return 0;
}

void gcd(int x,int y){
  int n,r;
  if(x>y){
    while(y>0){
    r = x%y;
    x = y;
    y = r;
  }
  printf("%d\n",x);
  }
  else{
    while (x>0){
    r = y%x;
    y = x;
    x = r;
    }
    printf("%d\n",y);
  }
}
 
  
