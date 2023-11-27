#include "stdio.h"
int main(int argc, char const *argv[])
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%f ",(a*b)/2.0);

	int flag=0;
	if(a/2.0==c){
		flag++;
	}
	if(b/2.0==d){
		flag++;
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