#include <stdio.h>

int main(void) {
	int n, i, arr[103], temp;
	
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	
	for(i=0;i<n/2;i++){
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	
	
	for(i=0;i<n-1;i++){
	printf("%d ", arr[i]);
    }
    
    printf("%d", arr[n-1]);

	return 0;
}