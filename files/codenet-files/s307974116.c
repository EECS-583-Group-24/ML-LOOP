/* ex 9_1
   cy_an  */

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
    stack input, output;
    char arr[SIZE];
    int i=0;
    
    //スタックを初期化
    initialize_stack(&input);
    initialize_stack(&output);

    //スタックにデータを追加
    scanf("%s", arr);
    while(arr[i] != '\0'){
        if(arr[i] == 'B'){
            if(input.count > 0){
                pop(&input);
            }
        }else{
            push(&input, arr[i]);
        }
        i++;
    }
    // スタックから別のスタックへ移して並べ替え
    while(input.count > 0){
        push(&output, pop(&input));
    }
    // スタックから要素を取り出して出力
    while(output.count > 0){
        printf("%c", pop(&output));
    }
    return 0;
}