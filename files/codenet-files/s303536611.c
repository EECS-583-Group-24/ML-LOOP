#include<stdio.h>

int main(void){
  
  int i;
  int j;
  char Out[11];
  char S[11];
  scanf("%s", S);

  while(S[i] != '\0'){
    if(S[i] == '0'){
      Out[j] = '0';
      j++;
    }
    else if(S[i] == '1'){
      Out[j] = '1';
      j++;
    }
    else if(S[i] == 'B'){
      if (j != 0){
        j--;
        Out[j] = '\0';
      }
    }
    i++;
  }

  printf("%s\n", Out);

  return 0;
}
