/* ex9_1
   nabe9393 */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
//構造体
typedef struct stack{
  int size;
  int count;
  char data[SIZE];
  char *top;
} stack;

//関数
void initialize_stack(stack *stk);
void print_stack(stack *stk);
void push(stack *stk, char elem);
char pop(stack *stk);

int main(void){
  //スタックの定義
  stack stk;
  int i;
  char str[11];
  //初期化
  initialize_stack(&stk);
  //入力
  for(i=0;i<10;i++){
    scanf("%c",&str[i]);
  }
  for(i=0;i<10;i++){
    if(str[i]=='1' || str[i]=='0'){
      //1or0でスタックにデータを追加
      push(&stk, str[i]);
    }
    if(str[i]=='B'){
      if(stk.count>0){
        //Bかつ、データがある場合はスタックからデータを取り出す
        pop(&stk);
      }
    }
  }
  //結果の出力
  print_stack(&stk);
  return 0;
}

//初期化の関数
void initialize_stack(stack *stk){
  stk->count = 0;
  stk->size = SIZE;
  stk->top = &(stk->data[SIZE]);
}

void push(stack *stk, char elem){
  if(stk->count >= stk->size){
    printf("Error: stack overflow. (x=%c)\n", elem);
    exit(1);
  }
  else{
    stk->top--;
    *(stk->top) = elem;
    stk->count++;
  }
}

char pop(stack *stk){
  char elem;
  if(stk->count <= 0){
    printf("Error: stack underflow.\n");
    exit(1);
  }
  else{
    elem = *(stk->top);
    stk->top++;
    stk->count--;
    return elem;
  }
}

void print_stack(stack *stk){
  //出力用の配列
  char output[11], *ptr_out;
  ptr_out = stk->top;
  for(int i=stk->count;i>0;i--){
    //逆順にする
    output[i-1] = *ptr_out;
    ptr_out++;
  }
  printf("%s\n",output);
}
