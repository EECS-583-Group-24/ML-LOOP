#include <stdio.h>
int main(){
  char n[4];
  scanf("%s",n);
  for(int i=0;i<3;i++){
    if(n[i]=='1')n[i]='9';
    else n[i]='1';
  }
  printf("%s",n);
  return 0;
}