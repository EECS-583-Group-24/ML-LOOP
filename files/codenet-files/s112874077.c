/* ex 9_1
   kohei_suzuki */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char input[SIZE];
    stack stk;

    initialize_stack(&stk);//stkの初期化 

    scanf("%s", input);//入力受取

    for(int i=0; i<strlen(input); i++){
        if(input[i] == '0' || input[i] == '1'){
            push(&stk, input[i]);
        }
        else if(input[i] == 'B' && stk.count > 0){
            pop(&stk);
        }
    }

    //古いデータから出力
    for (int i=0; i<stk.count; i++){
        printf("%c", stk.data[SIZE-i-1]);
    }

}