#include <stdio.h>
int main(void) {

	int suuretu, tmp, max;
	int array[200000];
	
	scanf("%d", &suuretu);

	for (int i = 0; i<suuretu; i++) {
		scanf("%d", &array[i]);
		
	}



	for (int m = 0; m<suuretu; m++) {
		if (m == 0) {
			max = array[1];
			for (int j = 1; j<suuretu; j++) {
				if (max<array[j]) {
					max = array[j];
				}
			}
			printf("%d\n", max);
		}
		else {
			max = array[0];
			for (int j = 1; j<m; j++) {
				if (max<array[j]) {
					max = array[j];
				}
			}
			for (int j = m+1; j<suuretu; j++) {
				if (max<array[j]) {
					max = array[j];
				}
			}
			printf("%d\n", max);
		}
		
		
	}
	return 0;
}
