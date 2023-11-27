#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	int i;
	int j=0;
	int k;

	char S[11];
	char Cpy[11];

	scanf("%s",S);

	// printf("nagasa = %d\n",strlen(S));
	

	for(i=0;i<strlen(S);i++){
		if(S[i] == '0'){
			Cpy[j] = '0';
			// printf("Cpy[%d]=%c\n",j,Cpy[j]);
			// printf("S[%d]=%c\n",i,S[i]);
			j++;
		}
		else if(S[i] == '1'){
			Cpy[j] = '1';
			// printf("Cpy[%d]=%c\n",j,Cpy[j]);
			// printf("S[%d]=%c\n",i,S[i]);
			j++;
		}
		else{
			for(k=j-1;k>0;k--){
				if(Cpy[k] != 'x'){
					Cpy[k] = 'x';
				}
			}	
		}
		
	}

	for(k=0;k<j;k++){
		if (Cpy[k] == 'x'){
			continue;
		}
		printf("%c",Cpy[k]);
		
	}
	printf("\n");

	return 0;
}