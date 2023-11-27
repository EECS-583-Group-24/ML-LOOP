#include <stdio.h>
#include <math.h>

int main(void) {
	int i,j,ans,a,b;
	int digit = 0;
	for(i=0;i<3;i++){
		digit = 0;
		scanf("%d %d\n",&a,&b);
		ans = a + b;
		digit = (int)log10(ans) + 1;
		printf("%d\n",digit);
	}
	return 0;
}