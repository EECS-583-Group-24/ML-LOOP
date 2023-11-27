#include<stdio.h>
int main(void){//floatよりもdoubleを
int n,a[1001],i,t;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
}
for(i=n;i>=1;i--){
if(n>=2)printf("%d ",a[i]);
else printf("%d",a[i]);
}
printf("\n");
return 0;
}
