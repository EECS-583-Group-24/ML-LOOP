#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main () {
	int n, i, j, k;
	long max;
	long *a;
	// int a[200000] = {0};
	scanf("%d", &n);
	a = (long *)malloc(n * sizeof(long));
	for(i = 0; i < n; ++i) scanf("%ld", &a[i]);
	for(i = 0; i < n; ++i){
		// max = 0;
		if(k == i || i == 0){
			max = 0;
			for(j = 0; j < n; ++j){
				if(i == j){
					continue;
				}
				if(max < a[j] && a[j] != n){
					max = a[j];
					k = j;
				}
			}
		}
		printf("%ld\n", max);
	}
	return 0;
}