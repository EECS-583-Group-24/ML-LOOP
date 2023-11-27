#include <stdio.h>



int main(void)
{
	int a[200], b[200];
	int i = 0, j;
	int n = 9;
	int count = 0;
	
	while (scanf("%d %d", &a[i], &b[i]) != EOF){
		a[i] += b[i];
		i++;
	}
	for (j = 0; j < i; j++){
		while (1){
			if (a[j] > n){
				count++;
				n = n + n * 10;
			}
			else {
				b[j] =count;
				count = 0;
				n = 9;
				break;
			}
		}
	}
	
	for (j = 0; j < i; j++){
		printf("%d\n", b[j]);
	}
	
	return (0);
}