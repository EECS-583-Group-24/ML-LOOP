#include <cstdio>
 
int main()
{
	int N;
	scanf("%d", &N);
 
	int i = N / 111;
	if (N % 111 != 0) ++i;
 
	printf("%d\n", i * 111);
	return 0;
}