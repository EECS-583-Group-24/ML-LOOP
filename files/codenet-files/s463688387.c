#include<stdio.h>
int main(void){
  char s[2];
  int i;
  scanf("%s",s);
  for(i=0;i<3;i++){
    if((s[i]-'0')==1)s[i]=9;
    if((s[i]-'0')==9)s[i]=1;}
  printf("%s\n",s);
  return 0;
}