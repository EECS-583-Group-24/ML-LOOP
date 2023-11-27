#include<stdio.h>

int main(void)
{
	char n[4];
	int i;
	
	scanf("%s", n);

	for(i=0;i<3;++i){

	if(n[i]=='1'){
	n[i]='9';}
	else if(n[i]=='9'){
	n[i]='1';
	}
	
	printf("%s",n);
	return 0;
}
