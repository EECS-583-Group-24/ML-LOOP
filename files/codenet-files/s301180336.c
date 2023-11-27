#include<stdio.h>
int main(void){
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			scanf("%d",&a[i]);
		}else{
			scanf("%d",&a[i]);
		}
	}
	for(i=n-1;i>=0;i--){
		if(i==0){
			printf("%d\n",a[i]);
		}else{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
