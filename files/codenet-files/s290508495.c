/*
 * main.c
 *
 *  Created on: 2020/07/27
 *      Author: 113896
 */
#include <stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = n-1; i >= 0; i--) {
		printf("%d", arr[i]);
		if (i == 0) printf("\n");
		else printf(" ");
	}

	return 0;
}


