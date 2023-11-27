#include<stdio.h>
#include<string.h>
 
int main(){
  char s[11];
  scanf("%s",s);
 
  int j=0;
  char array[11]={0};
  int len=strlen(s);
  for(int i=0;i<=len;i++){
    if(s[i]=='0'){
      array[j]='0';
      j++;
    }else if(s[i]=='1'){
      array[j]='1';
      j++;
    }else if(s[i]=='B'){
      j--;
      array[j]='\0';
    }
  }
  printf("%s",array);
  return 0;
}