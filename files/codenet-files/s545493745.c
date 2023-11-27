#include<stdio.h>

int main(void){
 int a[105];
 int i,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)scanf("%d",&a[i]);
 for(i=n-1;i>=0;i--)printf("%d ",a[i]);
 puts("");
 return 0;
}

