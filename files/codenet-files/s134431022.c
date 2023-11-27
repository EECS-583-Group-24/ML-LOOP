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
    }else{
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
    }else{
        latest = *(stk->top);
        stk->top++;
        stk->count--;
        return latest;
    }
}

int main(void){
    stack stk1, stk2;
    char str[11];
    int i = 0;

    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk1);
    initialize_stack(&stk2);
    //文字列を受け取る
    scanf("%s", str);
    //スタックにデータを追加
    for(i = 0; i < 10; i++){
        if(str[i] == 'B'){
            if(stk1.count > 0){
                pop(&stk1);
            }
        }else if(str[i] == '0' || str[i] == '1'){ 
            push(&stk1, str[i]);
        }else{
            break;
        }
    }

    //スタック内部のデータの前後反転
    while(stk1.count > 0){
        push(&stk2, pop(&stk1));
    }

    //答えを出力
    while(stk2.count > 0){
        printf("%c", pop(&stk2));
    }
    printf("\n");

    return 0;
}