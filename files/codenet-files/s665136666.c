#include <stdio.h>

#define N 200

typedef struct 
{
	int a;
	int b;
}dataSet;

int main()
{
	dataSet d[N];

	int i;

	for(i=0;i<N;i++)
	{
		scanf("%d %d", &d[i].a, &d[i].b);

		if((d[i].a + d[i].b)<10)
			printf("1\n");
		else if((d[i].a + d[i].b)>=10 && (d[i].a + d[i].b)<100)
			printf("2\n");
		else if((d[i].a + d[i].b)>=100 && (d[i].a + d[i].b)<1000)
			printf("3\n");
		else if((d[i].a + d[i].b)>=1000 && (d[i].a + d[i].b)<10000)
			printf("4\n");
		else if((d[i].a + d[i].b)>=10000 && (d[i].a + d[i].b)<100000)
			printf("5\n");
		else if((d[i].a + d[i].b)>=100000 && (d[i].a + d[i].b)<1000000)
			printf("6\n");
		else if((d[i].a + d[i].b)>=1000000 && (d[i].a + d[i].b)<10000000)
			printf("7\n");
	}

	return 0;
}