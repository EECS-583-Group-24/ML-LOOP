int main(void) {
	int n;
	int x[100];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d",&x[i]);
	}
	for (int p = n-1; p > 0; p--) {
			printf("%d ",x[p]);
	}
	printf("%d", x[0]);
}
