#include<stdio.h>
int main(void)
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		a=log10(a+b);
		printf("%d\n",a++);
	}
	return 0;
}