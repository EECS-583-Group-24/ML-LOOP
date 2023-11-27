#include <stdio.h>
#include <string.h>

int main() {
  int i, current_index = 0;
  char input_str[11], answer_str[11];
  scanf("%s", input_str);
  for(i = 0; i < strlen(input_str); i++) {
    if(input_str[i] == 'B') {
      if(current_index != 0) {
        current_index--;
        answer_str[current_index] = NULL;
      }
    } else {
      answer_str[current_index] == input_str[i];
      current_index++;
    }
  }
  printf("%s\n", answer_str);
  return 0;
}
