include <stdio.h>

int main(){
	double r, l, s;
	
	scanf("%d",&r);
	l = 2 * 3.141592653589 * r;
	s = r * r * 3.141592653589;
	printf("%f %f\n", l, s);
	
	return 0;
}