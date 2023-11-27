/* ex9_1
    sachiyan*/

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

int main(void){
    stack stk;
    char string[SIZE], output;
    int i;
    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk);

    //与えられた文字列の読み取り
    scanf("%s", string);


    for(i=0; i<strlen(string); i++){
        //与えられた文字のうち、0か1ならスタックに追加
        if(string[i] == '0' | string[i] == '1'){
            push(&stk, string[i]);
        //与えられた文字列がBでスタックの中身があれば消す
        }else if(stk.count > 0){
            pop(&stk);
        }
    }

    //スタックからデータを取り出す
    for(i = 0; i <= stk.count; i++){
        printf("%c", stk.data[SIZE - i]);
    }
    printf("\n");
    return 0;
}
