#include <stdio.h>
int main(int argc, char const *argv[]) {
  char str[11], res[11];
  int i=0, j=0;
  scanf("%s", str);
  while( str[i] != '\0' ){
    if( str[i] != 'B' ){
      res[j] = str[i];
      i++;
      j++;
    }else if( str[i]=='B' && j>0 ){
      res[j] = '\0';
      i++;
      j--;
    }else{
      i++;
    }
  }
  res[j] = '\n';
  printf("%s", res);
  return 0;
}
