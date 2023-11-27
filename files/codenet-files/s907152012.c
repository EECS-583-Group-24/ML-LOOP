#include<stdio.h>

int main()
{
	int a[100];
	int x,i;
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&a[i]);
	}
	for(i=x-1;i>=1;i--){
		printf("%d ",a[i]);
	}
	 printf("%d\n",a[0]);
		return 0;
}