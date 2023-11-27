#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,p=0,i;
	char s[11],x[11];
	scanf("%s", s);
	n=strlen(s);
	for(i=0; i<n; i++){
		if(s[i]=='1'){
			x[p]='1';
			p++;
		}
		if(s[i]=='0'){
			x[p]='0';
			p++;
		}
		if(s[i]=='B'&&p>0){
			p--;
		}
	}
	for(i=0; i<p; i++){
		printf("%c", x[i]);
	}
	printf("\n");
	
	return 0;
}