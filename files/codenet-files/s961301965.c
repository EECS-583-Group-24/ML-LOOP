#include<stdio.h>
#include<string.h>
 
int main(){
  char s[11];
  scanf("%s",s);
 
  int j=0;
  char array[11]={'\0'};
  int len=strlen(s);
  for(int i=0;i<len;i++){
    if(s[j]=='0'){
      array[i]='0';
    }else if(s[j]=='1'){
      array[i]='1';
    }else if(s[j]=='B'){
      array[i-1]='\0';
      i--;
    }
    j++;
    if(j==len){
      break;
    }
  }
  printf("%s",array);
  return 0;
}