#include<stdio.h>

int main(){
  int x,y,i,z;

  scanf("%d%d",&x,&y);

  if(x<y){
    z=x;
    x=y;
    y=z;
  }

  while(y>0){
    z= x%y;
    x=y;
    y=z;
  }
    
    


  printf("%d\n",x);
  
  return 0;
}


