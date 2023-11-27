#include <stdio.h>
#include <string.h>

int main(){
	
	char s[11];
	
	scanf("%s", s);
	
	for(int i=0; i<'\0'; i++){
		if(s[i]=='B'){
			s[i-1]='\b';
			s[i]='\b';
		}
		if(s[i]==32){
			s[i]='\b';
		}
		printf("%c", s[i]);
	}	
	
	return 0;
}