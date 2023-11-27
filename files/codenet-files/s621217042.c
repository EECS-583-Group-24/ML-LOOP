#include <stdio.h>
int main(){
  char c[11];
  char in;
  int i=0;
  while(1){
    if((scanf("%c",&in))!=1)break;
    if(in=='\n')break;

    if(in == '0') {
      c[i]=in;
      i++;
    }
 if(in == '1') {
      c[i]=in;
      i++;
    }
 if(in == 'B') {
      c[i]='\0';
      if(i>0)i--;
    }
  }
  if(c[0]=='\0')  printf("%s\n",c);
  return 0;
}
