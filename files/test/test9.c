#include<stdio.h>
int main(){
  char s[] = "1991";
  for(int i=0; i<3; i++){
    if(s[i]=='1'){printf("9");}
    else{printf("1");}
  }
  
  return 0;
}