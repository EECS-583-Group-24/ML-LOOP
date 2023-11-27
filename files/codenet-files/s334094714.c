#include <stdio.h>
#define MAX 200

int main(void) {
	int i,count;
	int arr[3][MAX];
	int dig[MAX];

	// input
	for (i=0; ; i++) {
		printf("in\n");
		if(scanf("%d %d", &arr[0][i], &arr[1][i]) == EOF) break;
		arr[2][i] = arr[0][i] + arr[1][i];
		count++;
	}

	// calc
	for (i=0; i < count; ++i){
		while (arr[2][i]/10 > 0) {
			arr[2][i] /= 10;
			dig[i]++; 
		}
	}	


	//output 
	for (i = 0; i < count; ++i)	{
		printf("%d\n", dig[i]+1);
	}

	return 0;	
}