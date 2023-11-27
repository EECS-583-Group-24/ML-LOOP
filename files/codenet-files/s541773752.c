#include <stdio.h>

int main(void) {
	int i;
	char s[4];
	scanf("%s",&s);
	for(i=0;i<5;i++){
		if(s[i]=='9'){
			s[i]='1';
		}else if(s[i]=='1'){
			s[i]='9';
		}
	}
	printf("%s",s);
	return 0;
}