/* ex4-1
   kas056*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

typedef struct{
    int size;//格納最大数
    int count;//現在のデータ数
    char data[SIZE];//データ配列
    char *top;//topのポインタ
    char *bottom;//一番下のポインタ
}stack;

void initialize(stack *stk){
    stk -> count = 0;
    stk -> size = SIZE;
    stk -> top = &(stk->data[SIZE]);//配列の最終要素の一つ手前
    stk -> bottom = &(stk->data[SIZE]);//初期配列の要素の一つ手前...(*)
}

void push(stack *stk, char s){
    if(stk->count >= stk -> size){//格納最大数を超えたらエラー
        fprintf(stderr, "Error: Stack overflow. (s=%c)\n", s);
    }
    else{
        stk -> top--;//一つ上にあげる(=一つ手前に移動)
        *(stk->top) = s;
        stk->count++;
    }
}

void pop(stack *stk){
    //popが指示されたとき、
    if(stk->count > 0){//要素があれば取り出すようにする。
        stk->top++;//一つ下に移動(=一つ後に移動)
        stk->count--;
    }
}

void print_stack(stack *stk){
    char *c;
    int i;
    c = stk->bottom-1;//配列の一番下のポインタを指定する。
    
    for(i = stk->count-1; i>-1; i--){//スタック内の文字数分操作
        printf("%c", *c--);//出力したら一つ上にあげる。
    }
}


stack stk;
int main(void){
    char sentence[SIZE];
    int i;

    initialize(&stk);

    scanf("%s", sentence);

    for(i=0; i<SIZE; i++){
        if(sentence[i] == '0' || sentence[i] == '1'){
            push(&stk, sentence[i]);//B以外はpush
        }
        else if(sentence[i] == 'B'){
            pop(&stk);//Bがでたらpop
        }
        else{
            continue;
        }
    }

    print_stack(&stk);

    return 0;
    

}