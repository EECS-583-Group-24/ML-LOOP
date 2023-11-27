#include <stdio.h>

int main(void) {
	int i[100];
	int x,n;
	scanf("%d",&x);
	for(n=0;n<x;n++){
		scanf("%d",&i[n]);
	}
	for(n=x-1;n=>0;n--){
		printf("%d",i[n]);
	
		
		if(n!=0){printf(" ")}
	}
	printf("\n");
	// your code goes here
	return 0;
}