#include<stdio.h>
int main(void){
int i,a,b,c;
while(1){
scanf("%d %d",&a,&b);
if(a==0){
break;
}
c=a+b;
for(i=1;c>10;i++){
c=c/10;
}
printf("%d\n",i);
}
return(0);
}