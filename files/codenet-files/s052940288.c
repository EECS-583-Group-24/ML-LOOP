#include <stdio.h>

int main (void) {

	int num, get, i;
	scanf ("%d", &num);
	int out[num];

	for (i=0; i<num; i++){
		scanf ("%d", &get);
		out[i] = get;
	}

	for (i=num-1; 0<=i; i--) {
		printf("%d", out[i]);
		if (i != 0) {
			printf(" ");
		} else {
			printf("\n");
		}
	}

	return 0;
}