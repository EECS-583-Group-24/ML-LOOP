/* ex9_1
   UMAboogie */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct { //スタックを定義
  int size;
  int count;
  char data[SIZE];
  char *top;
} stack;

void initialize_stack(stack *stk);
void print_stack(stack *stk);
void push(stack *stk, char x);
double pop(stack *stk);

stack stk;

int main(void){

  int i = 0;
  char key[SIZE+1]; //一時的に格納する配列を宣言
  initialize_stack(&stk); //スタックを初期化
  scanf("%s", key); //入力されたデータをkeyに追加

  while(key[i] != '\0'){
    if(key[i] == 'B'){
      if(stk.count > 0){
        pop(&stk); //入力がBでかつcountが正であればpop
      }
    }else{
      push(&stk,key[i]); //入力が0or1のときそれをスタックに追加
    }
    i++;
  }
  print_stack(&stk); //結果を出力
  return 0;
}


void initialize_stack(stack *stk){ //スタックの初期化
  stk->count = 0; //要素数を0にする
  stk->size = SIZE; //スタックの大きさをSIZEにする
  stk->top = &(stk->data[SIZE]); //topを配列の末尾にする
}

void push(stack *stk, char x){ //データの追加
  if(stk->count >= stk->size){//オーバーフローする時
    exit(1);
  }else{
    stk->top--; //topを1つ手前にする
    *(stk->top) = x; //そこにデータを格納する
    stk->count++; //countを1加算する
  }
}

double pop(stack *stk){ //データの取り出し
  char x;
  if(stk->count <= 0){//アンダーフローする時
    exit(1);
  }else{
    x = *(stk->top); //topの位置からデータを取り出す
    stk->top++; //topを1つ下げる
    stk->count--; //countを1下げる
    return x;
  }
}

void print_stack(stack *stk){ //スタックの中身を古い順に出力
  char *p;
  p = stk->top;
  for(int i=0;i<stk->count;i++){
    printf("%c ", *p++);
  }
  printf("¥n");
}
