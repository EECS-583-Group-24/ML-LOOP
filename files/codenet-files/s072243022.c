#include <stdio.h>

int main()
{
  int a,b,c,d;

  scanf("%d %d",&a,&b);
  if(a<b){
    c=a;
    a=b;
    b=c;
  }
  
  d=a%b;

  
  while(d!=0){
    a=b;
    b=d;
    d=a%b;
  }


  printf("%d\n",b);
  

  return 0;
}
  
    
  
  

