#include <stdio.h>
#include <string.h>

int main(){
	
	char s[10];
	
	scanf("%s", s);
	
	for(int i=0; i<10; i++){
		if(s[i]=='B'){
			s[i-1]=0;
			s[i]=0;
		}
	}	
	
	printf("%s", s);
	
	return 0;
}
