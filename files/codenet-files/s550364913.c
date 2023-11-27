#include<stdio.h>
int main(){
int a,b,n;
double c;
while(scanf("%d%d",&a,&b)){
c=a+b;
n=0;
if(c==0)n=1;
else while(c>=1){
c/=10;
n++;}
printf("%d\n",n);
}
return 0;
}