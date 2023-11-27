#include<stdio.h>
int main(void){
  int  W,H,x,y,X,Y,cou=0;
  double tate,yoko;
  scanf("%d %d %d %d",&W,&H,&x,&y);
  X=W/2;Y=H/2;
  if(X==x){
    cou++;
  }
  if(Y==y){
    cou++;
  }
  if(cou!=0){
    cou=1;
  }
  tate=(double)H*W-(double)x*H;
  yoko=(double)H*W-(double)y*W;
  if(tate>yoko){
    printf("%.6f %d",tate,cou);
  }else{
  printf("%.6f %d",yoko,cou);
  }

  return 0;
 }
      