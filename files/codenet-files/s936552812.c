#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b) {
	return *(const int *)b - *(const int *) a;
}

int ri() {
	int r=0, c, s=0;
	for(;;){c=getchar_unlocked();if(c=='-'){s=1;break;}if(c<='9'&&c>='0'){r=c-'0';break;}}
	for(;;){c=getchar_unlocked();if(c<'0'||c>'9')break;r=r*10+c-'0';}
	if(s)r=-r;
	return r;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) a[i] = ri();
	int max = 0, x = 0;
	for (int i = 0; i < n; i++) if (max < a[i]) max = a[i], x = 1; else if (max == a[i]) x++;
	int max2 = 0;
	for (int i = 0; i < n; i++) if (a[i] != max && max2 < a[i]) max2 = a[i];
	for (int i = 0; i < n; i++) {
		if (x == 1 && a[i] == max) printf("%d\n", max2);
		else printf("%d\n", max);
	}
	return 0;
}
