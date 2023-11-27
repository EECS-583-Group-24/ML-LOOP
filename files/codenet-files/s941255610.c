//半径 r の円の面積と円周の長さを求めるプログラムを作成して下さい
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int r = 0;
	double pai = 3.14159265359;
	
	scanf("%d", &r);
	printf("%f %f\n", r*r*pai, 2 * r*pai);
	return 0;
}
