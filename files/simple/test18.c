#include<stdio.h>
int main(void){
	int a,b,keta=0;
	a = 102;
	b = 23;
	a=a+b;
	while (a!=0){
		a/=10;
		keta++;
	}
	printf("%d\n",keta);
	return 0;
}