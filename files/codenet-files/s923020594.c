#include <stdio.h>

int main(void) {
	int a,b,c,d,i;
	for(i=0;i<3;i++){
	d=1;
	scanf("%d %d",&a,&b);
	c=a+b;
	while(9<c){
		c/=10;d++;
	}
	printf("%d\n",d);}
	return 0;
}