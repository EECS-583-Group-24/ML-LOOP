#include<stdio.h>
int main(){
  char s[4];
  scanf("%s",s);
  for(int i=0; i<3; i++){
    if(s[i]=='1'){printf("9");}
    else{printf("1");}
  }
  
  return 0;
}