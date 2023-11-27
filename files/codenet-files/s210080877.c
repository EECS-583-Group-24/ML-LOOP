#include<stdio.h>

int main()
{
	while(1)
	{
		int i,num[3],flag=1,keta=0,escape;

		scanf("%d %d",&num[0],&num[1]);
		
		num[2] = num[0] + num[1];
		
		while(flag)
		{
			num[2] = num[2] / 10;
			
			keta += 1;
			
			if(num[2] == 0)
				flag = 0;
		}

		printf("%d\n",keta);
	}

return 0;

}