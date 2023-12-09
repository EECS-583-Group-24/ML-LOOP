#include <stdio.h>
#include <string.h>

int main()
{
  char *s, out[10];
  s = "tenchars..";
  if(strlen(s) > 11)
    return -1;
  int i=0;
  while(*(s+i) != '\0'){
    if(*(s+i) == 'B')
      i--;
    else
      out[i] = *(s+i);
    i++;
  }
  printf("%s", out);
  return 0;
}
    
  

  
      