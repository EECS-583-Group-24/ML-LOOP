#include<stdio.h>
int main(void)
{
	int n,a[200000],i,max=0,tmp,j;
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0;i < n;i++) {
		tmp = a[i];
		a[i] = 0;
		for (j = 0;j < n;j++) {
			if (a[j] > max)
				max = a[j];
		}
		printf("%d\n", max);
		a[i] = tmp;
		max = 0;
	}
	return 0;
}