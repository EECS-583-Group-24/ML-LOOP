#include <stdio.h>

int main(){
	char n[4];
	int i;
	
	gets(n);
	
	for(i=0;i<3;i++){
		if(n[i]=='1'){
			n[i]='9';
		}else{
			n[i]='1';
		}
	}
	
	n[3]='\0';
	
	puts(n);
	
	return 0;
}