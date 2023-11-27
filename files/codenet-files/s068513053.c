#include<stdio.h>
int main(){

  int x,y,i,M;
  scanf("%d%d",&x,&y);
  x=x%y;
  for(i=1;i<=x;i++){
    if(x%i==0 && y%i==0) M = i;
  }
  printf("%d\n",M);
  return 0;
}
