#include<stdio.h>

int main(void)
{
	int i = 0;
	int a = 0;
	int b = 0; 
	int sum = 0;
	int keta = 0;
	int count = 0;

	// もし入力の終わりではないならループする
	while(scanf("%d %d", &a, &b) != EOF && count <= 200)
	{
		// もし入力された値が規定外だったらif文以下の処理をスキップする。
		if(a < 0 || b <0 || a > 1000000 || b > 1000000)
		{
			continue;
		}
		
		sum = a + b;

		while(sum >= 1)
		{
			sum /= 10;

			keta++;
		}

		printf("%d\n", keta);

		keta = 0;
		count++;
	}
}