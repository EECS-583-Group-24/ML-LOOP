#include<stdio.h>
#include<math.h>

/*studentID:107033227 Name:Mark Yeh Department:PME22*/

int main()
{
    int a,b,sum,i;
   while(scanf("%d %d", &a, &b)!=EOF)
   {
       int i=1;
       sum=a+b;
       do
       {
           sum=sum/10;
           i++;
       }while(sum!=0);
       printf("%d\n",i-1);
   }
   return 0;
}

