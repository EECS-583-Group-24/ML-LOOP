#include<stdio.h>
int main(){
int a,b,c;
int i;
for(i=0;i<200;i++){
if(scanf("%d %d",&a,&b)==EOF){
break;
}else{
c=(a+b)/10;
printf("%d\n",c);
}
}
return 0;
}