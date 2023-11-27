#include<stdio.h>
#include<math.h>

int main(void)
{
	int box[7] = {100,900,10,90,1,9};
	int n,temp=0;

	scanf("%d",&n);

	if (n / box[0] == 1)
	{
		temp += box[1];
		n -= box[0];
	}
	else
	{
		temp += box[0];
		n -= box[1];
	}
	if (n / box[2] == 1)
	{
		temp += box[3];
		n -= box[2];
	}
	else
	{
		temp += box[2];
		n -= box[3];
	}
	if (n / box[4] == 1)
	{
		temp += box[5];
		n -= box[4];
	}
	else
	{
		temp += box[4];
		n -= box[5];
	}

	printf("%d\n",temp);

	return 0;
}