#include<stdio.h>
int main(void){
	
	int a[100],b[100],n,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[n-1-i]=a[i];
	}
	for(i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	printf("\n");
	return 0;
}
