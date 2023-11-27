#include<stdio.h>
#include<string.h>
 
int main(){
  char inp[11];
  scanf("%s",inp);
 
  int j=0;
  char array[11]={'\0'};
  int len=strlen(inp);
  for(int i=0;i<len;i++){
    if(inp[i]=='0'){
      array[j]='0';
      j++;
    }else if(inp[i]=='1'){
      array[j]='1';
      j++;
    }else if(inp
	
	[i]=='B'){
      if(j!=0){
        j--;
        array[j]='\0';
      }
    }
  }
  printf("%s",array);
  return 0;
}