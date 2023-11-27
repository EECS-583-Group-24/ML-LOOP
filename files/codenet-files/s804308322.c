#include<stdio.h>

int count(int num);

int main(){
	int num[2];
	
	while(1)
	{
		scanf("%d %d", num, num+1);
		printf("%d\n", count(num[0] + num[1]));
	}
	
}

int count(int num)
{
	int ans = 0;
	
	while(num > 0)
	{
		ans++;
		num /= 10;
	}
	
	return ans;
}