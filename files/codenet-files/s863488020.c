#include <stdio.h>
 
char ch[12];
char s[12], idx;
 
int main(void)
{
  int i;
  
  scanf("%s", ch);
  for (i = 0; ch[i]; ++i)
  {
    if (ch[i] == 'B')
    {
      if (idx != 0) idx--;
    }
    else s[idx++] = ch[i];
  }
  s[idx] = 0;
  printf("%s\n", s);
  
  return 0;
}