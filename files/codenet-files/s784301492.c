#include<stdio.h>
int main()
{
	int n;
	int a,b,c;
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	b=n%10;
	n=n/10;
	c=n%10;
	if(a==9){
		a=1;
	}
	else{
		a=9;
	}
	if(b==9){
		b=1;
	}
	else{
		b=9;
	}
	if(c==9){
		c=1;
	}
	else{
		c=9;
	}
	printf("%d\n",c*100+b*10+a);
	return 0;
}