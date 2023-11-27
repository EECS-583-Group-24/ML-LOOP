/*	ex9_1
	suzuto	*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct stack{ /*入力した文字をスタックとして重ねていくための構造体を作る*/
  int size;
  int count;
  char inp_str[SIZE];
  char *top;
}stack;

/*プロトタイプ宣言*/
void initialize_stack(stack *stack_ptr);
void push(stack *stack_ptr, char add_elem);
char pop(stack *stack_ptr);

int main(void){
  stack inp_stack, res_stack; /*変数の宣言*/
  char inp[SIZE + 1], ins;
  int i;

  initialize_stack(&inp_stack); /*inp_stackを初期化*/
  initialize_stack(&res_stack); /*res_stackを初期化*/

  scanf("%s", inp); /*入力内容を記憶*/

  for(i = 0; i < SIZE + 1; i++){
    ins = inp[i]; /*i + 1番目の入力取り出し*/
    if(ins == '\0'){ /*末尾の識別*/
      break;
    }
    if(ins == 'B'){ /*バックスペースの時、スタックから一番上=最後に入力した文字を取り出す*/
      pop(&inp_stack);
    }
    else{
      push(&inp_stack, ins); /*文字入力の時、スタックの一番上に追加*/
    }
  }

  while (inp_stack.count > 0){ /*inp_stackの中身を全て(逆順に)res_stackに移し替える*/
    push(&res_stack, pop(&inp_stack));
  }

  while (res_stack.count > 0){ /*res_stackの中身を上から順に取り出していって答えを出力*/
    putchar(pop(&res_stack));
  }
  printf("\n"); /*改行*/
  return 0;
}

void initialize_stack(stack *stack_ptr){ /*スタックを初期化する関数*/
  stack_ptr->count = 0; /*要素の数 = 0*/
  stack_ptr->size = SIZE;
  stack_ptr->top = &(stack_ptr->inp_str[SIZE]); /*スタックの底に頂点を合わせる*/
}

void push(stack *stack_ptr, char add_elem){ /*スタックに要素を追加する関数*/
  if(stack_ptr->count >= stack_ptr->size){ /*スタックをあふれた時のエラー出力*/
    fprintf(stderr, "Error: stack overflow.\n");
    exit(1);
  }else{ /*頂点の位置を1つ上げて、その位置に要素を積む*/
    stack_ptr->top--;
    *(stack_ptr->top) = add_elem;
    stack_ptr->count++;
  }
}

char pop(stack *stack_ptr){
  char output_elem;
  if(stack_ptr->count <= 0){ /*スタックの底が尽きている時には何も取り出さない*/
    return 'B'; /*意味のない仮の出力*/
  }else{ /*一番上の要素を取り出し、頂点を一個下げる*/
    output_elem = *(stack_ptr->top);
    stack_ptr->count--;
    stack_ptr->top++;
    return output_elem;
  }
}
