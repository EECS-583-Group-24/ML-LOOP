/* ex 9_1
   nknm */

#include <stdio.h>
#include <stdlib.h>
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
    if(stk->count >= stk->size){        //sizeを超えたpushはエラー
        fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
        exit(1);
    }
    else{       //topを1つ上にあげて文字を追加、カウントを1プラス
        stk->top--;
        *(stk->top) = elem;
        stk->count++;
    }
}

//データの取り出し
void pop(stack *stk){
    if(stk->count > 0){     //要素がある場合のみ有効、topを1つ下げてカウントを1マイナス
        stk->top++;
        stk->count--;
    }
}

void print_stack(stack *stk){       //スタックの中身を古いほうからプリント
    int i = 0;
    char *ptr;
    ptr = stk->top;
    while(i < stk->count - 1){      //ポインタを最も古い要素に動かす
        ptr++;
        i++;
    }
    for(i = 0; i < stk->count; i++){        //1文字出力するごとにポインタを1つ上に動かす
        printf("%c", *ptr--);
    }
    printf("\n");
}

int main(void){
    stack stk;
    char imput[SIZE];
    int i;
    scanf("%s", imput);
    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk);
    //スタックにデータを追加
    for(i = 0; imput[i] != '\0'; i++){
        if(imput[i] == '0'){
            push(&stk, '0');
        }else if(imput[i] == '1'){
            push(&stk, '1');
    //スタックからデータを取り出す
        }else if(imput[i] == 'B'){
            pop(&stk);
        }
    }
    print_stack(&stk);

    return 0;
}