


#include<stdio.h>
int main(){
int a,b[10000],n,u,i;
scanf("%d",&a);
for(i=0;i<a;i++)
scanf("%d",&b[a]);
for(i=a-1;i>=0;i--){
printf("%d",b[i]);
if(i!=0)
printf(" ");
}
return 0;
}