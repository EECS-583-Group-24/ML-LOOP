#include <stdio.h>

int main(void)
{
	int n = 0;
	int a[100];
	
	scanf("%d",&n);
	
	if(n != 0){
		
		int i;
		
		for(i = 0 ; i < n ; i++){
			
			scanf("%d",&a[i]);
		}
		
		for(i-- ; i >= 0 ;i--){
			printf(" %d",a[i]);
		}
	}
	else{
	
	printf("%d\n",n);
	
	}
	return 0;
}