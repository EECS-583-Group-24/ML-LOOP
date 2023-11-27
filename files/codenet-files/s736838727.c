#include<stdio.h>

int main(){

  int x,y,k,i,j,v;

  scanf("%d%d",&x, &y);


  if(x>=y){
    if(x==y) v=x;

    k=x%y;
      for(i=1;i<=k;i++){
	if(y%i==0 && k%i==0) v=i;
    }
  }
  
  else if(y>x){
    k= y%x;
    for(i=1;i<=k;i++){
      if(x%i==0 && k%i==0) v=i;
    }
  }

  printf("%d\n",v);

  return 0;
}
