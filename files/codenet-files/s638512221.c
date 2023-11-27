#include<stdio.h>
volatile int max,i;

void recurse(int i)
{
	int p;
	i++;
	if(i<=max){
		scanf("%d ",&p);
		recurse(i);
	    printf("%d ",i,p);
	}
}
int main(){

scanf("%d",&max);
recurse(0);

printf("\n");
return 0;
}