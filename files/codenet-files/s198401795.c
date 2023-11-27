#include<stdio.h>
#include<stdlib.h>
void qsort(
	void* base, size_t num, size_t size,
	int(*compare)(const void* a, const void* b)
);
int desc(const void* a, const void* b) {
	return *(int*)b - *(int*)a;
}
int main(void) {
	int n;

	scanf("%d", &n);

	int i, j;
	int point[200000];
	
	

	for (i = 0; i < n; i++) {
		scanf("%d", &point[i]);
	}


	/*for (i = 0; i < n/2; i++) {
		kizyun[i] = point[i];
	}

	qsort(point, sizeof(point) / sizeof(*point), sizeof(*point), desc);
	

	for (i = 0; i < n/2; i++) {
		printf("%d\n", kizyun[i]);
	}

	for (i = 0; i < n; i++) {
		if (point[i] != kizyun[i]){
			printf("%d\n", point[i]);
	}else{
			for (int j = i; j < n; j++) {
				if (point[j] != kizyun[i]) {
					printf("%d\n", point[i]);
					break;
				}
			}
		
	}*/

	int max = point[0];
	int nextmax = 0;
	int a = 0;
	int b = 0;
	int temp;
	for (i = 0; i < n; i++) {
		if (max < point[i]) {
			temp = max;
			max = point[i];
			nextmax = temp;
			temp = a;
			a = i;
			b = temp;
		}
		else if (nextmax < point[i]) {
			nextmax = point[i];
		}
	}


	for (i = 0; i < n; i++) {
		if (a != i) {
			printf("%d\n", max);
		}
		else {
			printf("%d\n", nextmax);
		}
	}



	

	
	return 0;
}