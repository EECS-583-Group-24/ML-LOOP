include <stdio.h>


int main(void) {

	int suuretu, tmp, max;
	int array[200000];
	
	scanf("%d", &suuretu);

	for (int i = 0; i<suuretu; i++) {
		scanf("%d", &array[i]);
		
	}



	for (int m = 0; m<suuretu; m++) {
		tmp = array[0];
		array[0] = array[m];
		array[m] = tmp;
		max = array[1];
		for (int j = 1; j<suuretu; j++) {
			if (max<array[j]) {
				max = array[j];
			}
		}
		printf("%d\n", max);
		
	}
	return 0;
}