#include <stdio.h>
#include <string.h>
int main()
{
	int a,b;
	char n[10];
	while(scanf("%d %d",&a,&b)>0){
		sprintf(n,"%d",a+b);
		printf("%d",strlen(n));
	}
	return 0;
}