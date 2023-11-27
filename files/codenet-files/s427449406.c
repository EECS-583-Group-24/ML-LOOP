/* ex 9_1
   yy8332 */
#include <stdio.h>
#include <stdlib.h>
//スタックに格納するデータの最大数
#define SIZE 1000

//スタックの定義
typedef struct stack{
  int size;
    int count;
    char data[SIZE];
    char *top;
  } stack;

//スタックの初期化
void initialize_stack(stack *stk){
  stk->count = 0;
  stk->size = SIZE;
  stk->top = &(stk->data[SIZE]);
}

//データの追加
void push(stack *stk, char elem){
  if(stk->count >= stk->size){
    fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
    exit(1);
  }
  else{
    stk->top--;
    *(stk->top) = elem;
    stk->count++;
  }
}

//データの取り出し
char pop(stack *stk){
  char latest;
  if(stk->count <= 0){
    fprintf(stdout, "Error: stack underflow.\n");
    exit(1);
  }
  else{
    latest = *(stk->top);
    stk->top++;
    stk->count--;
    return latest;
  }
}

int main(void){
  stack stk;
  char input[11], str1[11], str2[11];
  int len1, len2, i;
  //スタックを初期化（ポインタ渡しで関数にわたすこと）
  initialize_stack(&stk);

  //入力読み取り
  scanf("%s", &input);

  //入力文字列の長さ取得
  len1 = strlen(input);

  //入力で場合分けしてstackを操作
  for(i = 0; i < len1; i++){
    if(input[i] == 'B' && stk.count != 0){
      pop(&stk);
    }
    else if(input[i] == '0' || input[i] == '1'){
      push(&stk, input[i]);
    }
  }

  //出力文字列の長さ取得
  len2 = stk.count;

  //出力
  for(i = 0; i < len2; i++){
    str1[i] = pop(&stk);
  }
  for(i = 0; i < len2; i++){
    str2[i] = str1[(len2 - 1) - i];
  }
  str2[len2] = '\0';

  printf("%s\n", str2);

  return 0;
}
