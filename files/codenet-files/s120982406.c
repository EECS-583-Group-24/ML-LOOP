#include<stdio.h>
int main(){
  char str[11];
  int i,len=0;
  
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++){
    if(str[i]!='B'&&str[i+1]!='B'){
      printf("%c",str[i]);
    }
  }
}