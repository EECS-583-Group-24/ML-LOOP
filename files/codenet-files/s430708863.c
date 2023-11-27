#include<stdio.h>
int main(){
	int a, i, x[100];
	scanf("%d", &a);
	for(i=0;i<a;i++){
		scanf("%d", &x[i]);
	}
	for(i=a-1;i>=0;i--){
		printf("%d", x[i]);
		if(i!=0){
			printf(" ");
		}
	}
	printf("\n");
}
