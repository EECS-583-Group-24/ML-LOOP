#include <stdio.h>

int main(){
	int a,i,b[3];
	scanf("%d",&a);
	for(i = 0;i < 3;i++){
	b[i] = a % 10;
	if(b[i] == 1)
		b[i] = 9;
	else if(b[i] == 9)
		b[i] = 1;
	a = a / 10;
	}
	printf("%d%d%d",b[2]b[1]b[0]);
}