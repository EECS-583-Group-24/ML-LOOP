#include <stdio.h>
int main(void){
	int a,b,x;
	while(scanf("%d",&a)!=EOF){
		scanf(" %d",&b);
		x=(a+b)/10;
if(x!=0)
		x++;
		printf("%d\n",x);
	}
	return 0;
}
