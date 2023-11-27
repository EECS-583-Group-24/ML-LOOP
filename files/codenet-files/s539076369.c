//ex9_1
//TKC001

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 10

//data[SIZE-1]がstackの底、data[0]が天井、topはstackの一番上の要素の位置
typedef struct stack{
    int size;
    int count;
    char data[SIZE];
    char *top;
} stack;
//stackの初期化、何もないっていない状態にする。
void init_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->data[SIZE]);
}
//番号が若い方が上なので、stackに要素が追加されるとtopが小さくなる
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

//配列dataの一番番号の若いやつをstackから外す。
void pop(stack *stk){
    if(stk->count <= 0){
        //何もしないけど気持ち悪いから書いた
    }
    else{
        stk->top++;
        stk->count--;
    }
}
//dataの中身を後ろからcount個出力=stackの内容をすべて出力
void print_stack(stack *stk){
    int i;
    for(i = SIZE-1; i > SIZE-1-stk->count; i--){
        printf("%c", stk->data[i]);
    }
}

int main(void){
    int i;
    char str[SIZE+1];
    stack stk;
    //stackの初期化
    init_stack(&stk);
    //入力
    scanf("%s", str);
    //strの要素に応じてpushとdeleteを決める
    for (i = 0; i < strlen(str); i++){
        if(str[i] == 'B'){
            pop(&stk);
        }
        else if(str[i] == '0'){
            push(&stk, '0');
        }else{
            push(&stk, '1');
        }
    }
    //出力
    print_stack(&stk);
    

    return 0;
}