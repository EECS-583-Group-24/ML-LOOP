#include<stdio.h>
 
int main(void){
int a,b,c,i;
for(;;){
scanf("%d %d\n",&a,&b);
c=a+b;
for(i=0;c!=0;i++) c=(int)(c/10);
printf("%d\n",i);
}
    return 0;
}