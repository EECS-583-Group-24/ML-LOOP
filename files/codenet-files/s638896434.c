#include <stdio.h>

int main() {
  char s[11]={'\0'};
  char ans[11]={'\0'};
  int i=0,p=0;

  scanf("%s",s);
  while(s[i]!='\0'){
    switch (s[i]) {
      case '0':
        ans[p++]='0';
        break;
      case '1':
        ans[p++]='1';
        break;
      case 'B':
        if(p>0) ans[p--]='\0';
        break;
      default:
        break;
    }
    i++;
  }
  printf("%s\n",ans);
  return 0;
}