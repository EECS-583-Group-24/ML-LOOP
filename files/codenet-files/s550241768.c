/* ex9_1:
    Jun_JPN*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 11
typedef struct{
    int size;
    int count;
    char str[SIZE];
    char *top;
}stack;

void initialize_stack(stack *stk);
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

    for(i=0; str[i] != '\0'; i++){  // 結果を表示
        printf("%c", stk.str[i]);
    }
    printf("\n");

    return 0;
}

/* スタックを初期化 */
void initialize_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->str[0]);  // 頭文字のポインタををtopに
}

/* B以外の文字ををプッシュ */
void push(stack *stk, char bin){
    if(stk->count >= stk->size){    // オーバーフロー処理
        printf("Error: stack overflow\n");
        exit(1);
    }else{
        *(stk->top) = bin;  // スタックのトップに文字を加える
        stk->top++;         // スタックのトップを1つ上に
        stk->count++;
    }
}

/* Bが来たらポップ */
void pop(stack *stk){
    if(stk->count <= 0){            // アンダーフロー処理
        ;   // 何もしない
    }else{
        *(stk->top) = '\0'; // スタックのトップをヌル文字に
        stk->top--;         // スタックのトップを1つ下に
        stk->count--;
    }
}