/* ex9_1
  terakura */

  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  //スタックに格納するデータの最大数
  #define SIZE 100

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
      int i;

      for(i=0; i < stk->count; i++){
          printf("%c", stk->data[SIZE-i-1]);
      }
      printf("\n");
  }

  int main(void){
      stack stk;
      char input[11];
      int i;
      //スタックを初期化（ポインタ渡しで関数にわたすこと）
      initialize_stack(&stk);

      scanf("%s", input);

      //input[i] != 'B'ならスタックにデータを追加
      for(i=0; i<strlen(input); i++){
          if(input[i] != 'B'){
              push(&stk, input[i]);
          }
          else if(stk.count > 0){
              pop(&stk);
          }
      }

      //出力
      print_stack(&stk);
      return 0;
  }
