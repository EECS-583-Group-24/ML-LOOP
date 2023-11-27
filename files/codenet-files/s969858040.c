#include <stdio.h>
#include <string.h>
int main(){
  char s[11]={'\0'};
  char input[11];
  int now=0,i,len;
  
  scanf("%s",input);
  len=strlen(input);
  
  for(i=0;i<len;i++){
    switch((int)input[i]){
      case '1':
        s[now]='1';
        now++;
        break;
      case '0':
        s[now]='0';
        now++;
        break;
      case 'B':
        if(now>0){
          s[now]='\0';
          now--;
        } else {
          s[now]='\0';
        }
    }
  }
  
  printf("%s",s);
}