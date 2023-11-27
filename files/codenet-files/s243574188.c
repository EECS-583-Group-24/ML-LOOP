#include<stdio.h>
#include<string.h>
#define N 10
int main (){
  char str[N] = {'\0'};
  char kotae[N] = {'\0'};
  char word;
  int i;
  int j = 0;
  scanf("%s", str);
  for(i = 0; i < strlen(str); i++){
    word = str[i];
    if(word == '0' || word == '1'){
      kotae[j] = word;
      j++;
    }else if(word == 'B'){
      j--;
      if(j < 0){
        j = 0;
      }
    }else{
      printf("エラー\n");
    }
  }
  for(i = j; j < N; j++){
    kotae[i] = '\0';
  }
  printf("%s", kotae);
  return 0;
}
