#include<stdio.h>
int main()
{
   int n,x,temp=0,i=0;
   scanf("%d",&n);
   while(n!=0){
    x=n%10;
    if(x>temp){
        temp=x;
    }
    n=n/10;
    i++;
   }
   while(i>0){
    printf("%d",temp);
    i--;
   }
   return 0;

}
