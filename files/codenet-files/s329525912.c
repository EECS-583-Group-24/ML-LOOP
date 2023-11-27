#include <stdio.h>
 
int main(void){
  char s[11], ans[11];
  int i, j = 0;
  
  for(i = 0; i < 10; i++){
    s[i] = 'A';
  }
  
  scanf("%s", s);
  
  for(i = 0; i < 10; i++){
    if((s[i] == '0') || (s[i] == '1')){
      ans[j] = s[i];
      if(i < 9){
      	j++;
      }
    }else if(s[i] == 'B'){
    	 if(i > 0){
          j--;
         }
    }else{
      j--;
      break;
    }
  }
  
  for(i = 0; i < j; i++){
    printf("%c", ans[i]);
  }
  
  return 0;
}
