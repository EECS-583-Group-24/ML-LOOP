/* h-ex9_1
   Ohshima */

#include <stdio.h>
#include <stdlib.h>
//スタックに格納するデータの最大数
#define SIZE 10

//スタックの定義
typedef struct stack{
  int size;
  int count;
  char data[SIZE + 1]; //topの初期位置を考慮
  char *top;
}stack;

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
  }else{
    stk->top--;
    *(stk->top) = elem;
    stk->count++;
  }
}

//データの取り出し
void pop(stack *stk){
  if(stk->count <= 0){
    fprintf(stdout, "Error: stack underflow.\n");
    exit(1);
  }else{
    stk->top++;
    stk->count--;
  }
}

//スタックの中身を古いものから出力
void print_stack(stack *stk){
  int i;
  for(i = 0; i < stk->count; i++){
    putchar(stk->data[SIZE - 1 - i]);
  }
  printf("\n");
}

int main(void){
  stack stk;
  char tmp;
  int i;
  //スタックを初期化（ポインタ渡しで関数にわたすこと）
  initialize_stack(&stk);
  //1文字ずつ標準入力から受け取り以下を実行
  while(scanf("%c", &tmp) != EOF && tmp != '\n'){ //テストケースの中に10文字+改行文字の場合が含まれている
    //B以外の文字のときスタックにデータを追加
    if(tmp != 'B'){
      push(&stk, tmp);
    }else{
      //Bがきた場合、文字列が空でないならデータを取り除く
      if(stk.count > 0){
        pop(&stk);
      }
    }
  }
  //最後に、スタックに残っている文字を古いものから1文字ずつ出力
  print_stack(&stk);
  return 0;
}
