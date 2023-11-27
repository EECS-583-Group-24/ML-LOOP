#include<stdio.h>
int main(void){//floatよりもdoubleを
int n,a[101],i,t;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
}
for(i=n;i>=1;i--){
printf("%d ",a[i]);
}
return 0;
}
