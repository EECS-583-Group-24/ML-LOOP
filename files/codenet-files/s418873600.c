#include<stdio.h>

int main(void)
{
	int a;
	int i,j,wa;
	int num;
	for(a = 0 ; a < 200 ; a++){
		scanf("%d %d",&i,&j);
		wa =i + j;
		
		for(num = 1 ; wa >= 10 ; num++){
			wa = wa / 10;
		}
		printf("%d\n",num);
	}
	return 0;
}