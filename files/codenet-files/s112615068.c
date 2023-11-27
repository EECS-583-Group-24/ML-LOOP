#include<stdio.h>

int main(){
	char key[15];
	scanf("%s", key);
	int ctrb=0;
	int len=0;
	for(int i=0; key[i]!='\0'; i++){
		if(i>0){
			if(key[i]=='B'){
				key[i-1]='f';
				ctrb++;
			}
		}
		else{
			if(key[i]=='B'){
				key[i]='f';
				ctrb++;
			}
		}
		len++;
	}
	for(int i=0; i<len; i++){
		if(key[i]=='1' || key[i]=='0'){
			printf("%c", key[i]);
		}
	}
	
	return 0;
}