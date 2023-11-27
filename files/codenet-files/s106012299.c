#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}

	int max1 = 0;
	int max2 = 0;

	for(int i = 0; i < n; i++){
		if(max2 < a[i]){
			if(max1 < a[i]){
				max2 = max1;
				max1 = a[i];
			}else{
				max2 = a[i];
			}
		}
	}

	for(int i = 0; i < n; i++){
		if(a[i] == max1){
			printf("%d\n", max2);
		}else{
			printf("%d\n", max1);
		}
	}
}