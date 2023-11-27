#include <stdio.h>
int main()
{
  int a,b,c;
  int n = 0;

 
  while(scanf("%d%d",&a,&b) != EOF){
    c = a + b;
    
    for(n = 0 ; c > 0 ; ++n ) 
      {
        c /= 10;
   }
   
     printf("%d\n",n);

  }
  
  return 0;
}