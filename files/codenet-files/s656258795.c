#include<stdio.h>
#define N 10^9

main(){
  int x, y, i;
  scanf("%d%d", &x, &y); 
  if(x == y){
    printf("%d", x);
  }
  else{
    while(x % y != 0){
      if(x < y){
	i = y;
	y = x;
	x = i;
      }
      else{
	x = x % y;   
      }
    }
    printf("%d\n", y);
  }
  return 0;
}