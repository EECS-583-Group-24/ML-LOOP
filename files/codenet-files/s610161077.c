/*ex9_1 hightierra*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000

// スタックの定義
typedef struct{
    int size;
    int count;
    char data[SIZE];
    char *top;
}stack;

// 初期化
void initialize(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->data[0]);
}

// pushとpopの定義
void push(stack *stk, char pushdata){
    if(stk->count >= stk->size){
        printf("Error: Stack overflow.");
        exit(1);
    }else{
        *(stk->top) = pushdata;
        stk->top++;
        stk->count++;
    }
}

char pop(stack *stk){
    char popdata;
    if(stk->count <= 0){
        printf("Error: Stack underflow.");
        exit(1);
    }else{
        popdata = *(stk->top);
        stk->top--;
        stk->count--;
        return popdata;
    }
}


int main(void){
    stack input;
    char key[SIZE],popdata;
    int i;
    
    initialize(&input);

    // 入力データをkeyにいれる
    scanf("%s",key);
    
    // 入力データ分ループし、popかpush
    for(i=0; i<strlen(key); i++){
        if(key[i] != 'B'){
            push(&input,key[i]);
        }else if(key[i] == 'B' && (input.count)>0){
            popdata = pop(&input);
        }
    }
    
    for(i=0; i<strlen(key); i++){
        printf("%c",input.data[i]);
    }
    printf("\n");
    return 0;
}