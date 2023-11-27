#include <stdio.h>

int main (void)
{
	int n,i,X[100];
	
	scanf("%d/n",&n);
	
	for(i = 0;i < n;i++){

	scanf("%d\n",&X[i]);

	}
	
	for(i=0;i<n;i++){
		
		printf("%d",X[n-i-1]);
		
		if(i<n-1){
		printf(" ");
		}
		

	}
	
		printf("\n");
	return 0;

}