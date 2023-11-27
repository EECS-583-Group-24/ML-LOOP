#include<stdio.h>
int main(void){
	int n,i;
	int ai[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&ai[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("%d ",ai[i]);
	}
	printf("%d",ai[0]);
	return 0;
}