/* ex9_1
   moka223711 */

#include <stdio.h> 
#define SIZE 15

typedef struct stack{ // 文字列を格納するスタック
    int size;
    int count; // スタックに格納されたデータ数を表す変数
    char data[SIZE]; // スタックにデータを格納するための配列
    char *top; // スタックの先頭アドレスを表すポインタ
}stack;

void initialize_stack(stack *stk); // スタックを初期化するための関数
void print_stack(stack *stk); // スタックに格納されているデータを出力するための関数
void push(stack *stk, char input); // スタックの先頭にデータを格納するための関数
void pop(stack *stk); // スタックの先頭からデータを取り出すための関数

int main(void){
    stack stk;
    char input; // 入力を受け取るための変数
    initialize_stack(&stk); // スタックを初期化
    while((input = getchar()) != EOF){ // 入力ファイルの終端に達するまで文字を受け取る
        if(input != 'B')push(&stk, input); // 入力された文字が'0'か'1'だったときはスタックの先頭に文字を格納する
        else if(stk.count > 0)pop(&stk); // 入力された文字が'B'でありスタックの要素が空でなければ先頭から文字を削除する
    }
    print_stack(&stk); // スタックに格納されているデータを出力
    return 0;
}

// スタックを初期化するための関数
void initialize_stack(stack *stk){
    stk->count = 0; // スタックに格納されているデータの総数は0
    stk->size = SIZE;
    stk->top = &(stk->data[SIZE]); // スタックの先頭アドレスをstk->topに格納する
}

void print_stack(stack *stk){
    int i;
    for(i = 0; i < stk->count; i++) // 格納されているデータをすべて出力していく
        printf("%c", stk->data[stk->size-i-1]); // 古い要素から順番に出力していく
    printf("\n");// 最後に改行を出力して終了
}

// スタックの先頭にデータを格納するための関数
void push(stack *stk, char input){
    stk->top--; // スタックの先頭のアドレスを一つずらす
    *(stk->top) = input; // スタックの先頭に文字を格納する
    stk->count++; // スタックのデータの総数のカウントを一つ増やす
}

void pop(stack *stk){
    stk->top++; // スタックの先頭アドレスを一つずらす
    stk->count--; // スタックのデータの総数のカウントを一つ減らす
}
