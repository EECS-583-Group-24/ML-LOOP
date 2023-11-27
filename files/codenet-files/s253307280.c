#include<stdio.h>

int main(){
  long int x,y,z;

  scanf("%d%d",&x,&y);

  while(x%y!=0){
    z = x%y;
    x = y;
    y = z;
  }
  printf("%d\n",y);

  return 0;
}

