#include <stdio.h>
#include <string.h>

int
main(int argc, char *argv[])
{
  int i = 0, j = 0;
  char s[100];
  scanf("%s", s);
  char t[100];
 

  while(s[i] != '\0'){
    if(s[i] == '0'){ t[j++] = '0';}
    else if(s[i] == '1'){ t[j++] = '1';}
    else if(j != 0){
      j--;
      t[j] = '\0';
    }
    i++;
    
  }
  printf("%s\n", t);

  return 0;
}
