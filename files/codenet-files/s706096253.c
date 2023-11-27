#include<stdio.h>

int main(){
	int num,a,b,digits;
	digits=1;
	while(scanf("%d %d",&a,&b)!=EOF){
		num=a+b;
		while(num/10!=0)
			digits++;
	}
	printf("%d\n",digits);
	return 0;
}