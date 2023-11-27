#include<stdio.h>
int main(){

	int number;

	scanf("%d",&number);

	int a[number];

	for(int i=0;i<number;i++){
			scanf("%d",&a[i]);
	}

	for(int i=number-1;i>=1;i--){
		printf("%d ",a[i]);
	}

	printf("%d",a[0]);
}

