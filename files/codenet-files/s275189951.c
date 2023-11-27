#include <stdio.h>
#define PI 3.14159265

int main(){
	float r;
	
	while( scanf("%f", &r) != EOF )

	printf("%f %f\n", (float)r*r*PI, (float)2*r*PI);

	return 0;
}