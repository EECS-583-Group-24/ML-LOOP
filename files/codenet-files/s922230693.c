#include<stdio.h>
int main(){
	int n, m = 0;
	scanf("%d",&n);
	while(n != 0)
	{
		m *= 10;
		if(n % 10 == 1)
			m += 9;
		else
			m += 1;		
		n /= 10;
	}
	while(m != 0)
	{
		printf("%d", m%10);
		m /= 10;
	}
}
