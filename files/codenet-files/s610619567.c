#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char s[10];
  int i,piv=0;
  char ans[10];

  memset(s, '\0', 10);
  memset(ans, '\0', 10);

  scanf("%s", s);

  for(i=0;i<strlen(s);i++){
    if( s[i] == 'B' ){
      if(piv != 0) piv--;
    }else{
      ans[piv] = s[i];
      piv++;
    }
  }

  printf("%s\n",ans );


  return 0;
}
