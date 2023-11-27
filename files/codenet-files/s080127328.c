/* ex9_1:
    Jun_JPN*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 11
typedef struct{
    int size;       // 格納最大数
    int count;      // 現在のデータ数
    char str[SIZE]; // 文字列
    char *top;      // トップへのポインタ（トップは末尾の要素の1つ上の要素のポインタ）
}stack;

void initialize_stack(stack *stk);
void print_stack(stack *stk);
void push(stack *stk, char bin);
void pop(stack *stk);

int main(void){
    stack stk;
    char str[SIZE];
    int i;

    scanf("%s", str);           // 文字列を受け取る
    initialize_stack(&stk);     // スタックstkを初期化

    for(i=0; str[i] != '\0'; i++){
        if(str[i]=='B') pop(&stk);  // Bが来たらポップ
        else push(&stk, str[i]);    // B以外が来たらプッシュ
    }

    print_stack(&stk);

    return 0;
}

/* スタックを初期化 */
void initialize_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->str[0] = '\0';
    stk->top = &(stk->str[0]);  // 頭文字のポインタををtopに
}

/* スタックの中身を表示 */
void print_stack(stack *stk){
    for(int i=0; stk->str[i] != '\0'; i++){
        printf("%c", stk->str[i]);
    }
    printf("\n");
}

/* B以外の文字ををプッシュ */
void push(stack *stk, char bin){
    if(stk->count >= stk->size){    // オーバーフロー処理
        printf("Error: stack overflow\n");
        exit(1);
    }else{
        *(stk->top) = bin;  // スタックのトップに文字を加える
        stk->top++;         // スタックのトップを1つ上に
        *(stk->top) = '\0'; // スタックのトップをヌル文字に
        stk->count++;
    }
}

/* Bが来たらポップ
    要素を取り除く＝要素をヌル文字で書き換える */
void pop(stack *stk){
    if(stk->count <= 0){            // アンダーフロー処理
        ;   // 何もしない
    }else{
        stk->top--;         // スタックのトップを1つ下に
        *(stk->top) = '\0'; // スタックのトップをヌル文字に
        stk->count--;
    }
}