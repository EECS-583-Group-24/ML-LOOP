#include<stdio.h>
#include<math.h>

int main(void){
	int r;
	float area,length;

	scanf("%d",&r);
	area = r * r * M_PI;
	length = r * 2 * M_PI;

	printf("%.6f %.6f\n",area,length);
	return 0;
}