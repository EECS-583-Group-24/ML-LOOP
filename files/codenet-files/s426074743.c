/* ex9_1
   TakayukiY*/

#include <stdio.h>
#include <stdlib.h>
//スタックに格納するデータの最大数
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
        return '\0';
    }
    else{
        latest = *(stk->top);
        stk->top++;
        stk->count--;
        return latest;
    }
}

int main(void){
    char input[10+1],*ptr;
    stack stk;
    int i;
    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk);

    scanf("%s",input);
    ptr=input;
    while(*ptr!='\0'){
        if(*ptr=='B') pop(&stk);
        else push(&stk,*ptr);
        ptr++;
    }

    for(i=stk.count-1;i>=0;i--){
        printf("%c",*(stk.top+i));
    }

    return 0;
}
