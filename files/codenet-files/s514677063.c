#include <stdio.h>
#include <string.h>

int main(void)
{
	int a, b;
	char buf[8];

	while (~scanf("%d %d", &a, &b)){
		sprintf(buf, "%d", a + b);
		printf("%d\n", strlen(buf));
	}

	return (0);
}