#include <stdio.h>

int main(void)
{
	int i, j, n, m, a[200001], x;
	
	a[0] = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i = 1; i <= n; i++){
		m = a[i];
		a[i] = 0;
		for(j = 1; j <= n; j++){
			if(a[j] > a[j - 1]){
				x = a[j];
			}
		}
		printf("%d\n", x);
		a[i] = m;
      	x = 0;
	}
	
	return 0;
}
