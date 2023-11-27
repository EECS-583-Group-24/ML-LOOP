#include<stdio.h>

int main(){
	int num,a,b,digits,i;
	i=0;
	digits=1;
	while(scanf("%d%d" , &a , &b)!=EOF&&i<200){
		num=a+b;
		while(num/10!=0)
			digits++;
		printf("%d\n",digits);
		i++;
	}
	return 0;
}