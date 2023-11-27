#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>




int main()
{
	int N, a[200000],i,j;

	scanf("%d", &N);

	for (i = 0; i < N; i++) scanf("%d", &a[i]);

	int max = 0;

	for (i = 0; i < N; i++) {

		if (a[i] > max) {
			max = a[i];
			j = i;
		}
	}

	int max2 = 0;

	for (i = 0; i < N; i++) {

		if (a[i] > max2 && i!=j) {
			max2 = a[i];
			
		}
	}


	for (i = 0; i < N; i++) {

		if (i == j) {
			printf("%d\n", max2);

		}else printf("%d\n", max);
	}

}





