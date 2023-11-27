#include "stdio.h"
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%f ",(a*b)/2.0);

	int flag=0;
	if(a/2==c){
		flag++;
	}
	if(b/2==d){
		flag++;
	}
	if (c==0)
	{
		flag=1;
	}
	if(d==0){
		flag=1;
	}
	if (c==a)
	{
		flag=1;
	}
	if(d==b){
		flag=1;
	}
	flag=flag%2;
	if (flag==1)
	{
		printf("0\n");
	}else{
		printf("1\n");
	}
	return 0;
}