/* ex 8_1
   unomi */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    // スタックがオーバーフローしないなら
    if(stk->count < stk->size){
        stk->top--;  //topを一つ上げる
        *(stk->top) = elem;  // そこに代入
        stk->count++;  // データ数を増やす
    }
}

//データの取り出し
char pop(stack *stk){
    char latest;
    // スタックがアンダーフローしないなら
    if(stk->count > 0){
        latest = *(stk->top);  // topから取り出し
        stk->top++;  // topを一つ下げる
        stk->count--; // データ数を減らす
        return latest;
    }
}

int main(void){
    // スタックの宣言
    stack stk;
    char sentence[10], trush;
    char *ptr;

    // スタックの初期化
    initialize_stack(&stk);

    // 入力の取得
    scanf("%s",sentence);

    // 入力を先頭から確認
    for(int i=0; i<strlen(sentence); i++){
        // 入力が 0 or 1 ならスタックにプッシュ
        if(sentence[i]=='0'||sentence[i]=='1')
            push(&stk, sentence[i]);
        // 入力が B ならスタックからポップ
        else
            trush = pop(&stk);
    }

    // ポインタ変数にtopのアドレスを代入
    ptr = stk.top;
    // スタックのデータ数分スタックから表示
    for(int j=0; j<stk.count; j++)
        printf("%c",*ptr++);
    printf("\n");
    return 0;
}