#include<stdio.h>
#include<string.h>
int main(){
	char a[1000001];
	char b[1000001];
	char c;
	int len;
	scanf("%s %s",a,b);
	c=a+b;
	len = strlen(c);
	printf("%d\n",len);
	return 0;
}