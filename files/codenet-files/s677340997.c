/*  ex9_1
	masaaki52	*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

//スタックの定義
typedef  struct stack{
  int size;
  int count;
  char data[SIZE];
  char *top;
}stack;

//スタックの初期化
void initialize_stack(stack *stk){
  stk->count = 0;
  stk->size = SIZE;
  stk->top = &(stk->data[SIZE]);
}

//データの追加
void push(stack *stk,char elem){
  if(stk->count >= stk->size){
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
  latest = *(stk->top);
  stk->top++;
  stk->count--;
  return latest;
}
    
int main(void){
  char string[11];
  stack stk_1;
  int i;
  initialize_stack(&stk_1);
  scanf("%s",string);
  for(i=0;i<strlen(string);i++){
    if(string[i] != 'B'){
      push(&stk_1, string[i]);
    }
    else if(stk_1.count != 0){
      pop(&stk_1);
    }
  }
  for(i=0;i<stk_1.count;i++){
    printf("%c",*(stk_1.top)++);
  }
  return 0;
}