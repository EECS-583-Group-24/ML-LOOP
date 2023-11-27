#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int x[100]; int i;
	for(i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	for(i=n-1;i>0;i--){
		printf("%d ",x[i]);
	}
	printf("%d",x[0]);
	printf("\n");
	return 0;
}
