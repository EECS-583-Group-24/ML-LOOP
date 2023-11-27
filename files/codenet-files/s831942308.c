#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d",&n);
	
	int a[100],i,j;
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		if(!(j==0))printf(" ");
		printf("%d",a[n-1-j]);
	}
	
	printf("\n");
	
	return 0;
}