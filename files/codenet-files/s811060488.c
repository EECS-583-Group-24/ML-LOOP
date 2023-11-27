#include <stdio.h>
#include <math.h>

int main(void) {
	int a,b;
	int c,div;
	
	scanf("%d %d",&a,&b);
	if(a < b){
		c = a;
		a = b;
		b = c;
	}else {}
	
	for(div=b;div>0;div--){
		if(a % div == 0 && b % div == 0) break;
		else {}
	}
	
	printf("%d",div);
	return 0;
}