#include <stdio.h>

int main(void) {
	int a[100], i, n;
	
	while(1){
		
		
		scanf("%d", &n);
		
		if(n == 0){
			break;
		}
		
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
			
		}
		for(i = n-1; i >=0; i--){
			printf("%d",a[i]);
		}
	}
	
	return 0;
}