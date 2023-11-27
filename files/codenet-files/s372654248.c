#include <stdio.h>
#include <math.h>

int main(void) {

	int a,b;
	int c,i,div;

	scanf("%d %d",&a,&b);
	if(a < b){
		c = a;
		a = b;
		b = c;
	}else if(a == b){
		printf("%d\n",a);
		return 0;
	}
	else {}

	for(div=a%b;div>0;div--){
		if(a % div == 0 && b % div == 0) break;
		else {}
	}
	printf("%d\n",div);
	
	return 0;
}