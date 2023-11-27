#include <stdio.h>
#include <string.h>

int main(void){
  char s[10];
  scanf("%s",s);

  char ans[10];
  int location = 0;
  for(int i = 0;i < strlen(s);i++){
    if(s[i] == '0'){
      ans[location++] = '0';
    }else if(s[i] == '1'){
      ans[location++] = '1';
    }else{
      if(location != 0)
        ans[location--] = '\0';
    }
  }

  printf("%s\n",ans);

  return 0;
}