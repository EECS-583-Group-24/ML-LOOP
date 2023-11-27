#include <stdio.h>

int main(void)
{
	int a,b,i;
	for(i=0;i<200;i++){
		scanf("%d %d",&a,&b);
		a=a+b;
		int count=0;
		while(a>0){
			a/=10;
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
