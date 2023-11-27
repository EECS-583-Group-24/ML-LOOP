#include <stdio.h>
#include <string.h>
int main(){
  char s[11];
  char ans[11];
  int ans_cnt = 0;

  scanf("%s", s);

  for(int cnt = 0; cnt < strlen(s); cnt++){
    if(s[cnt] == '0' || s[cnt] == '1'){
      ans[ans_cnt] = s[cnt];
      ans_cnt++;
    }else{
      if(ans_cnt > 0){
	ans_cnt--;
	ans[ans_cnt] = ' ';
      }else{
	// do nothing
      }
    }
  }

  printf("%s", ans);

  printf("\n");
  
}
