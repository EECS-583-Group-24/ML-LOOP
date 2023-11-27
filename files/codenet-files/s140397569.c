#include<stdio.h>
#include<string.h>
int main(){ 
int a,b;
int i=0;
char n[20];
while(~scanf("%d %d",&a,&b)){
sprintf(n,"%d",a+b);
printf("%d\n",strlen(n));
}    
return 0;
}