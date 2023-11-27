#include<stdio.h>
int main(void){
	int n,i;
	scanf("%d",&n);
        printf("\n");
	int a[100];
	for(i=0;i<n;i++){
		scanf("%d ",a[i]);
	}
	printf("\n");
	for(i = n-1;i >=0;i--){
		printf("%d ",a[i]);
		
	}
	printf("\n");
	return 0;
}