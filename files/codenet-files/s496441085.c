#include <stdio.h>
 
int main(void) {
	char s[1111], a[1111]={};
	int i, n, t=0;
	
	scanf("%s", s);
	
	n=strlen(s);
	
	for(i=0;i<n;i++){
		if(s[i]=='1')
		a[t++]='1';
		if(s[i]=='0')
		a[t++]='0';
		if(s[i]=='B'){
			if(t!=0)
			a[--t]='\0';
			
		}
		
	}
	
	printf("%s\n", a);
	return 0;
}