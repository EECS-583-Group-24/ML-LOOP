#include<stdio.h>
int main(){
  int i;
  char s[5];
  scanf("%s",s);
  for(i=0;i<=2;i++){
    if(s[i]=='1')s[i]='9';
    else if(s[i]=='9')s[i]='1';
  }
  puts(s);
  return 0;
}
