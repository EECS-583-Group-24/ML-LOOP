#include<stdio.h>

int main(void)
{
	char s[11];
	char ans[11];
	int i,j;
	
	scanf("%s",s);
	
	for(i=0; i<11; i++){
		ans[i] = '\0';
	}
	
	i=0;
	j=0;
	while(1){
		
		if(s[i] == '0'){
			ans[j] = '0';
			j++;
		}else if(s[i] == '1'){
			ans[j] = '1';
			j++;
		}else if(s[i] == 'B'){
			ans[j] = '\0';
			j--;
			if( j <= 0){
				 j=0;
			}
		}else if(s[i] == '\0'){
			ans[j] = '\0';
			break;
		}
		i++;
		
	}
	
	for(i=0; i < j ;i++) printf("%c",ans[i]);
	
	printf("\n");
	
	return 0;
	
}