#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	int i,count=0;
	while (count<200)
	{
		if (scanf("%d",&a)!=EOF)
		{
			scanf("%d", &b);
			i = 0;
			while (pow(10,i)<=a+b)
			{
				i++;
			}
			printf("%d", i);
		}
		else
		{
			break;
		}
		count++;
	}
	return 0;
}