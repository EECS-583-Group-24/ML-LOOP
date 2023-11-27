#include<stdio.h>
#include<math.h>

    int main(void){
          int a,b;
           while(scanf("%d %d",&a,&b) !=EOF)
          {
             printf("%d",log10(a+b)+1);
          }
             return 0;
            }