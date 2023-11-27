#include<stdio.h>

int main(void){
	int a,b,add,i;
	
	scanf("%d %d",&a,&b);
	add = a + b;

	for(i = 0;add != 0;i++){
		add /= 10;
	}
	printf("%d\n",i);
	
	return 0;
}