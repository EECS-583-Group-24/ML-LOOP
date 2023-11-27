#include<stdio.h>
int main(void){
	int n,i;
	int a[1000];
	
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(i = n-1;i >= 0;i--){
		if(i){
			printf("%d ",a[i]);
		}else{
			printf("%d",a[i]);
		}
	}
	printf("\n");
	return 0;
}