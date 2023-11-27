/*  ex9-1
    toshiwaka */

#include <stdio.h>
#include <stdlib.h>

//スタックに格納するデータの最大数
//1<=|s|<=10
#define SIZE 10

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

void print_stack(stack *stk){
  for(int i = 1; i <= stk->count; i++){
    printf("%c", stk->data[SIZE-i]);
  }
  putchar('\n');
}

int main(void){
    //スタック
    stack stk;
    //1<=|s|<=SIZEより最大の要素数は\0を含めてSIZE+1
    char input[SIZE+1];
    //入力の長さ
    int len;

    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk);

    //入力
    scanf("%s", input);
    len = strlen(input);

    for(int i = 0; i < len; i++){
      if(input[i] == 'B'){
        pop(&stk);
      } else {
        push(&stk, input[i]);
      }
    }

    //スタックの中身を出力
    print_stack(&stk);

    return 0;
}