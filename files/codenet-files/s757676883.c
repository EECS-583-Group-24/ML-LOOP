#include<stdio.h>

int main(void)
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	putchar('\n');
	for(i=0;i<n;i++){
		if(i==n-1){
			printf("%d\n",a[n-1-i]);
		} else {
			printf("%d ",a[n-1-i]);
		}
	}
	return 0;
}