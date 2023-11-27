#include <stdio.h>
#include <string.h>
int main(void) {
  int i = 0;
  int j = 0;
  int count = 0;
  char s[11];
  char answer[11];
  
  scanf("%s",s);
  for(i = 0; i < 11; i++){
  	if(s[i] == '0'){
  		answer[j] = '0';
  		j++;
  	}
  	else if(s[i] == '1'){
  		answer[j] = '1';
  		j++;
  	}
  	else if(s[i] == 'B'){
  		if(j != 0){	
  			answer[j - 1] = '\0';
  			j--;
  		}
  		else if(j == 0){
  			answer[j] = '\0';
  		}
  	}
  }
  printf("%s\n",answer);
}