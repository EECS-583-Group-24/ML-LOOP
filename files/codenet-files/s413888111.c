#include<stdio.h>

int main(void)
{
	int n,i;
	int a[100];
	scanf("%d",&n);
	if(n>100);
	else{
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=n-1;i>=0;i--) printf("%d ",a[i]);
		printf("\n");
	}
	return 0;
}