#include<stdio.h>
#define MAX_SIZE 256

int count(int num);

int main(){
	int num[2];
	int ans[MAX_SIZE];
	int dataSize = 0;
	int i;
	
	while(1)
	{
		scanf("%d %d", num, num+1);
		if(num[0] == EOF)
		{
			break;
		}
		else
		{
			ans[dataSize++] = count(num[0] + num[1]);
		}
	}
	
	for(i = 0; i < dataSize; i++)
	{
		printf("%d\n", ans[i]);
	}
	
	return 0;
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