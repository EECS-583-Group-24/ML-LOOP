#include<stdio.h>
int main(){
  int a,b,c,d;
  scanf("%d%d",&a,&b);
  if(a>b){
    d=a%b;
    while(d!=0){
      a=b;
      b=d;
      d = a%b;
    }
    printf("%d",b);
  }
    printf("%d",a);
  }
  printf("\n");
  return 0;
}
