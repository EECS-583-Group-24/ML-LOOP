#include <stdio.h>

int main(){
	
	int a,b,c,d;
	scanf("%d",&a);
	
	b=a/100;
	c=(a-b*100)/10;
	d=a%10;
	
	if(b==1)b=9;
	else b=1;
	
	if(c==1)c=9;
	else c=1;
	if(d==1)d=9;
	else d=1;
	
	printf("%d\n",b*100+c*10+d);
	return 0;
}
