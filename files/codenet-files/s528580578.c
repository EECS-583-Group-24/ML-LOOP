#include <stdio.h>

int main(void)
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF){
		c=a+b;
		if(0<=c&&c<10){
			printf("1");
		}
		else if(10<=c&&c<100){
			printf("2");
		}
		else if(100<=c&&c<1000){
			printf("3");
		}
		else if(1000<=c&&c<10000){
			printf("4");
		}
		else if(10000<=c&&c<100000){
			printf("5");
		}
		else if(100000<=c&&c<1000000){
			printf("6");
		}
		else {
			printf("7");
		}
	}
	return 0;
}