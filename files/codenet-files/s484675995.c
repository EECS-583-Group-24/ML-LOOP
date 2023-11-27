#include <stdio.h>

int main(){
  int x,y,z;

  scanf("%d%d",&x,&y);

  if ((x>=1 && x<=1000000000) && (y>=1 && y<=1000000000)){
    if (x>=y){
      while(1){
	z = x%y;
	if (z == 0) break;
	x = y;
	y = z;
      }
      printf("%d\n",y);
    }
    else{
      while(1){
	z = y%x;
	if (z == 0) break;
	y = x;
	x = z;
      }
      printf("%d\n",x);
    }
  }

  return 0;
}

