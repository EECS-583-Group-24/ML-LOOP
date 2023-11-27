#include<stdio.h>
int main(){
  int x,y,ans1;
  scanf("%d%d",&x,&y);
  if(x<=0||y<=0||x>1000000001||y>1000000001){
    return 0;
  }
  int a,b;
  a=x;
  b=y;
  if(y>x){
    a=y;
    b=x;
  }
  else if(a==b){
    printf("%d\n",a);
    return 0;
  }
  while(1){
    ans1=a%b;
    if(ans1==0)break;
    else{
      a=b;
      b=ans1;
    }}
  printf("%d\n",b);
  return 0;
}

