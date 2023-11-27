#define scanf_s scanf
#include <stdio.h>
//#include <iostream>
//using namespace std;
#define MAX 201
int main(void)
{
	int a, b, i, sum, cou = 0;
	int ans[MAX] = { 0 };
	while (scanf_s("%d %d", &a, &b) != EOF) {
		sum = a + b;
		++ans[cou];
		if (sum != 0){
			while (1) {
				if (sum <= 1) break;
				sum /= 10;
				++ans[cou];
			}
		}
		++cou;
	}
	for (i = 0; i < cou; ++i) {
		if (i != 0) printf("\n");
		printf("%d", ans[i]);
	}
}