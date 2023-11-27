#include <stdio.h>

int main(){
  char str[4];

  scanf("%s",str);

  for(int i=0;i<3;i++)
    if(str[i]=='1')
      str[i]='9';
    else
      str[i]='1';

  printf("%s\n",str);
  
  return 0;
}
