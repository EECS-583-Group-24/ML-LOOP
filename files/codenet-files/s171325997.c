#include <stdio.h>

int main()
{
	int num, i;
	scanf("%d", &num);
	int data[num];
	for (i = 0; i < num; i++) {
		scanf("%d", &data[i]);
	}
	for (i = num - 1; i > 0; i--) {
		printf("%d ", data[i]);
	}
	printf("%d\n", data[0]);
	return 0;
}