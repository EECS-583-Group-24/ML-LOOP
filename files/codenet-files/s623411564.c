#include<stdio.h>
int main(void){
	int a,b,keta=0;
	scanf("%d %d",&a,&b);
	a=a+b;
	while (a!=0){
		a/=10;
		keta++;
	}
	printf("%d\n",keta);
	return 0;
}