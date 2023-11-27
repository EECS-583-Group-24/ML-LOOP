#include <stdio.h>

int main(void){
	int n,i;

	scanf("%d", &n);

	if(n > 100){
		return 0;
	}
	
	int data[n];

	for(i = 0;i < n;i++){
		scanf("%d", &data[i]);
	}

	/*???????????¨???*/
	for(i = n - 1;i >= 0;i--){
		printf("%d ", data[i]);
	}

	return 0;
}