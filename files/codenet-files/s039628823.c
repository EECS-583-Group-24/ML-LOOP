#include<stdio.h>
#include<string.h>
     
int main(){
    char s[15];
    scanf("%s", s);
     
    int idx = 0;
    char arr[11] = {'\0'};
    int len = strlen(s);
    
	for(int i = 0; i < len;i++){
        if(s[i] == '0'){
          arr[idx] = '0';
          idx++;
        }
		
		else if (s[i] == '1'){
          arr[idx] = '1';
          idx++;
        }
		
		else if(s[i] == 'B'){
          if (idx != 0){
            idx--;
          }
        }
      }
	printf("%s", arr);
    return 0;
}