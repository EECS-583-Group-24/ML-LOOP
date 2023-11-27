#include<stdio.h>

int main(){

int a,b,n,l,i;

for(i=0;i<201;i++){

if(scanf("%d %d",a,b)==EOF){

n=a+b;

for(i=i;n>0;1){
l++;
}
printf("%d\n",l);

}
else{
break;
}

}


return 0;
}