#include<stdio.h>
int main(void)
{
	int n,x[100],a,m,i;
	scanf("%d", &n);
	m=n-1;
	for(i=0; i<n; i++)
	{
		scanf("%d", &a);
		x[m]=a;
		m--;
	}
	for(i=0; i<n; i++)
	{
		printf("%d", x[i]);
		if(i<n-1)
		printf(" ");
	}
	printf("\n");
	
	return 0;
}
