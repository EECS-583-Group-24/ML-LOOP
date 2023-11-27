#include "stdio.h"
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("%f ",(a*b)/2.0);

	int flag=0;
	if(a/2==c){
		if (b/2==d)
		{
			printf("1\n");
		}
	}
	else{
		printf("0\n");
	}
	return 0;
}