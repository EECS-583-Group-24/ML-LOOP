/*  ex9_1
    urah  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// sの最大の長さ
#define MAX_LEN 11

//スタックの定義
typedef struct stack{
    int size;
    int count;
    char data[MAX_LEN];
    char *top;
} stack;

//スタックの初期化
void initialize_stack(stack *stk){
    stk->count = 0;
    stk->size = MAX_LEN;
    stk->top = &(stk->data[MAX_LEN]);
}

//データの追加
void push(stack *stk, char elem){
    // エラー処理
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
void pop(stack *stk){
    // エラー処理
    if(stk->count <= 0){
        fprintf(stdout, "Error: stack underflow.\n");
        exit(1);
    }else{
        stk->top++;
        stk->count--;
    }
}

// データの出力
void print_stack(stack *stk){
    char *ptr;   

    ptr = &(stk->data[MAX_LEN]);

    // 逆方向から出力していく
    for(int i=0; i<stk->count; i++){
        printf("%c",*(--ptr));
    }

    printf("\n");
}


int main(void){
    stack stk;
    char string[MAX_LEN];

    // 入力受け取り
    scanf("%s", string);

    //スタックを初期化
    initialize_stack(&stk);   

    for (int i=0; i<strlen(string); i++){
        if (string[i] == 'B' && stk.count != 0){
            // データの取り出し
            pop(&stk);
        } else if (string[i] == '1' || string[i] == '0'){
            // データの追加
            push(&stk, string[i]);
        }
    }

    print_stack(&stk);

    return 0;
}