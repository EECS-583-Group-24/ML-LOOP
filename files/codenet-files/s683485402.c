#include "stdio.h"
#define NUMBER 100
int main(void){
int n,i,tmp;
int a[NUMBER];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
for(i=0;i<n/2;i++){
tmp=a[i];
a[i]=a[n-i-1];
a[n-i-1]=tmp;
}
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
puts("");
return 0;
}