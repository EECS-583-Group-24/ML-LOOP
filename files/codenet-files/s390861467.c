#include <stdio.h>

int main(void){
  
  char S[4];
  
  fgets(S,80,stdin);
  
  for(int i = 0;i < 3;++i){
    if(S[i] == '9'){
      printf("%c",'1');
    }
    else{
      printf("%c",'9');
    }
  }
  return 0;
}
