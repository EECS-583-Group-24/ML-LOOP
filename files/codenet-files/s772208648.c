#include<stdio.h>
int main(void){
  char s[2];
  int i;
  scanf("%s",s);
  for(i=0;i<3;i++)
    switch(s[i]-'0'){
      case 1:
        s[i]='9';
        break;
      case 9:
        s[i]='1'
          break;}
  printf("%s\n",s);
  return 0;
}