#include <stdio.h>

int main(void)
{
  char s[11] = "";
  char a[11] = "";
  int i, j;
  
  scanf("%s", s);
  for ( i=0, j=0; s[i]!='\0'; i++ ) {
    switch ( s[i] ) {
    case 'B':
      j--;
      if ( j < 0 ) j = 0;
      break;
    default:
      a[j++] = s[i];
      break;
    }
  }
  a[j] = '\0';
  
  puts(a);
  
  return 0;
}