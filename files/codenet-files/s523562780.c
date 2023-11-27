#include <stdio.h>

int main(void)
{
	int i,n,x[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&x[i]);
	}
	for(i=n-1;i>=1;i--)
	{
		printf("%d ",x[i]);
	}
	printf("%d",x[0]);
	return 0;
}