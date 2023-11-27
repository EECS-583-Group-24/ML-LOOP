#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char s[11];
  int i,piv=0;
  char ans[11];

  memset(s, '\0', 11);
  memset(ans, '\0', 11);

  scanf("%s", s);
  //printf("%lu\n",strlen(s) );
  for(i=0;i < strlen(s); i++){
    if( s[i] == 'B' ){
      if(piv != 0) piv--;
      ans[piv] = '\0';
    }else{
      ans[piv++] = s[i];
    }
  }

  printf("%s\n",ans );


  return 0;
}
