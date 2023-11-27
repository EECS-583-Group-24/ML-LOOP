#include<stdio.h>
#define Min 1
#define Max 1000000000

int main(){
  int a,b,c,r;
  scanf("%d %d",&a,&b);
  if(Min<=a&&Max>=a){
    if(Min<=b&&Max>=b){ 
      if(a<b){
	c=a;
	a=b;
	b=c;}
      r=a%b;
      while(r!=0){
	a=b;
	b=r;
	r=a%b;
      }
      printf("%d\n",b);
    }
    else printf ("x,yの入力が範囲外です\n");
  }
  else printf ("x,yの入力が範囲外です\n");
  return 0;
}

