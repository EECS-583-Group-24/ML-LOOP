#include<stdio.h>
int main(void){
	int n,a[100],b[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		b[j]=a[i-1];
		printf(" %d",b[j]);
		i--;
	}
	printf("\n");
	return 0;
}