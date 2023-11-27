/* ex9_1
   key_tree */

#include <stdio.h>
#include <stdlib.h>
//スタックに格納するデータの最大数
#define SIZE 11

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
    int i;
    char input_str[SIZE], *str;
    scanf("%s", input_str);
    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk);
    
    str = input_str;
    while(*(str) != '\0'){
        //0か1であれば追加
        if(*(str) == '1' || *(str) == '0'){
            push(&stk, *(str));
        }
        //それ以外（B）であれば削除
        else{
            pop(&stk);
        }
        str++;
    }
    //スタックを逆順で出力
    for(i = 0; i < stk.count; i++){
        printf("%c", stk.data[SIZE - i - 1]);
    }
    printf("\n");
    return 0;
}