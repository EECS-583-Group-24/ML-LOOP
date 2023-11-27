#include <stdio.h>
#include <math.h>

#define PI 3.14159265359
//#define scanf scanf_s

// 半径Rの面積と円周を出力
int main()
{
	double iInputR;
	scanf("%lf", &iInputR);

	printf("%lf %lf", iInputR * iInputR * PI, 2 * iInputR * PI);
	return 0;
}
