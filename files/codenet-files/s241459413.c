#include<stdio.h>
 
int main(){
 
int a,b,n,l,i,j;
 
for(i=0;i<201;i++){
break;
scanf("%d %d",a,b);


if(a!=0&&b!=0){
 
n=a+b;
 
for(j=0;n>0;j++){
n=n/10;
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