#include <stdio.h>

int main(void) {
	unsigned long a,b;
	int cnt;
	while(scanf("%ld %ld",&a,&b)!=EOF) {
		cnt=1;
		a+=b;
		while(a>=10) {
			a/=10;
			cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}