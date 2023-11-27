#include<stdio.h>
#include<string.h>
int main()
{
  char s[10];
  char moji[10];
  int len;
  
  scanf("%s",s);
  
  for(int i=0;i<10;i++){
    len=strlen(moji);
    if( len == 0 ) break;
    else moji[len-1] = '\0';
  }
  for(int i=0;i<strlen(s);i++){
    len=strlen(moji);
    if(s[i]=='0') moji[len]='0';
    else if(s[i]=='1') moji[len]='1';
    else {
      if( len == 0 ) continue;
      else moji[len-1] = '\0';
    }
  }
  printf("%s",moji);
    
  return 0;
}