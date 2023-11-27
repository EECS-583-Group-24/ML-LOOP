/* ex 9_1
   ruuu0048 */

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
    }
    else{
        stk->top--;
        *(stk->top) = elem;
        stk->count++;
    }
}

//データの取り出し
void pop(stack *stk){
    if(stk->count > 0){ //アンダーフローするときは何もしない
        stk->top++;
        stk->count--;
    }
}

//出力
void print_stack(stack *stk){
    char *p;
    p = &(stk->data[SIZE-1]); //最も古いデータの場所をポインタに代入
    for(int i=0;i<stk->count;i++){
        printf("%c", *p--);
    }
    printf("\n");
}

int main(void){
    stack stk;
    char key[11];
    int i = -1;
    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk);
    scanf("%s",key);
    while(i++ < 10){
        if(key[i]=='B'){ //バックスペースのときはポップ
            pop(&stk);
        }
        else if(key[i] == '0' || key[i] == '1'){ //0か1のときはプッシュ
            push(&stk,key[i]);
        }
    }
    print_stack(&stk); //出力


    return 0;
}