/* ex9_1
    fmuacshai */

# include<stdio.h>
#include<stdlib.h>
# define SIZE 20
//stackの定義
typedef struct{
    int size;
    int count;
    char string[SIZE];
    char *top;
} stack;
//データの追加
void push(stack *stk,char character){
    if(stk->count>=stk->size){
        printf("Error");
    }else{
        stk->top--;
        *(stk->top)=character;
        stk->count++;
    }
}
//データの取り出し
void pop(stack *stk){
    if(stk->count>=0){
        stk->top++;
        stk->count--;
    }
}
//データの初期化
void initialize(stack *stk){
    stk->size=SIZE;
    stk->count=0;
    stk->top=&(stk->string[SIZE]);
}
//データの出力
void output(stack *stk){
    int i;
    stk->top+=stk->count;
    for(i=0;i<=stk->count;i++){
        printf("%c",*(stk->top));
        stk->top--;
    }
    printf("\n");
}

int main(void){
    int i;
    //stack stkの定義
    stack stk;
    //入力で利用するinputを定義
    char input[SIZE];
    //データを初期化
    initialize(&stk);
    //追加と消去をする
    for(i=0;input[i]!='\0';i++){
        if(input[i]=='0'||input[i]=='1'){
            push(&stk, input[i]);
        }else{
            pop(&stk);
        }
    }
    //出力
    output(&stk);
    return 0;
}