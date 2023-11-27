#include <stdio.h>

int main(int argc, char** argv)
{
	int i, num, list[100];
	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		scanf("%d", &list[i]);
	}

	for (i = num - 1; i >= 0; i--) {
		if (i == 0) {
			printf("%d", list[i]);
		}
		else {
			printf("%d ", list[i]);
		}
	}
	return 0;
}