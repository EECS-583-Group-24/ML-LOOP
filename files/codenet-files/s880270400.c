#include <stdio.h>
#include <string.h>

int main (void)
{
  char s[10] , ans[10] , c;
  int  j = 0;
  scanf("%s",s);
  
  for(int i = 0;i <strlen(s);i ++){
    if(s[i] !='B'){
      c = s[i];
      ans[j] = c;
      j ++;
    }
    else{
      if(j > 0)
      j --;
    }}
  
  ans[j] = '\0';
  printf("%s",ans);
  
  return 0;
}