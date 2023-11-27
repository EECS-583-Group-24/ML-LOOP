#include<stdio.h>

int main(){
  int x,y,temp,result;

  scanf("%d%d",&x,&y);

  if(x<y){//x=gig,y=small
    temp=x;
    x=y; 
    y=temp;
  }
  
  result=x%y;

  printf("result %d\n",result);
  
  while(result!=0){
    x=y; //x=small
    y=result;
    result=x%y;
  }

  printf("%d\n",y);

  return 0;
}

