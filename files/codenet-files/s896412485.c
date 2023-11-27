#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int i,j=0;

	char S[11];
	char Cpy[11];

	scanf("%s",S);

	// printf("nagasa = %d\n",strlen(S));
	

	for(int i =0;i<strlen(S);i++){
		if(S[i] == '0'){
			Cpy[j] = '0';
			j++;
		}
		else if (S[i] == '1'){
			Cpy[j] = '1';
			j++;
		}
		else if (S[i] == 'B' && Cpy!= NULL ){
			Cpy[j-1] = 'X';
			j--;
		}
	}

	for(int i=0;i<j;i++){
		if (Cpy[i] == 'X'){
			continue;
		}
		printf("%c",Cpy[i]);
	}
	return 0;
}