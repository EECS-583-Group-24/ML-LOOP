#include <stdio.h>
#include <string.h>

int main(){
	
	char s[15];
	
	scanf("%s", s);
	
	int length = strlen(s);
	
	for(int i=0; i<length; i++){
		if(s[i]=='B'){
			s[i-1]='\b';
			s[i]='\b';
		}
		printf("%c", s[i]);
	}	
	
	return 0;
}