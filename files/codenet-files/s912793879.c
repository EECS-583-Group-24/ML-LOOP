#include<stdio.h>
int main()
{
	int i,j,n,str[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&j);
		str[i]=j;
	}
	str[n+1]=NULL;
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",str[i]);
	}	
	printf("\n");
	return 0;
}