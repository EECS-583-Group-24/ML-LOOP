/* ex 9_1
   riverstone */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//スタックに格納するデータの数
#define SIZE 20
 
//スタックの定義
typedef struct stack{
    int size;//格納最大数
    int count;//現在のデータ数
    char data[SIZE];//データ配列
    char *top;//topへのポインタ
} stack;

void initialize_stack(stack *stk);
void push(stack *stk, char elem);
char pop(stack *stk);
void print_stack(stack *stk);

int main(void){
    int i=0;
    char string[SIZE];
    stack stk;
 
    //スタックを初期化
    initialize_stack(&stk);
 
    //入力を受け取る
    scanf("%s", string);

    //stringの中身を一文字ずつ見ていく
    for(i=0;i<strlen(string);i++){
        //入力文字が0か1の場合
        if(string[i]=='0' || string[i]=='1'){
            //スタックにプッシュする
            push(&stk,string[i]);
        }

        //入力文字がBの場合
        else if(string[i]=='B' && stk.count>0){
            //スタックから一文字popする
            pop(&stk);
        }
    } 

    //stackの中身を出力
    print_stack(&stk);
    printf("\n");
    return 0;
}


//スタックの初期化
void initialize_stack(stack *stk){
    stk->count = 0;//個数を0にセット
    stk->size = SIZE;//格納最大数はSIZEに
    stk->top = &(stk->data[SIZE]);//topは配列の最終要素の1つ手前。
}

//データの追加
void push(stack *stk, char elem){
    //最大要素数stk->sizeより多くの要素を追加使用とした場合エラー
    if(stk->count >= stk->size){
        fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
        exit(1);
    }
    else{
        //topを1つ上に上げる(=topを1つ手前に移動する)
        stk->top--;
        //1つ上げたtopにデータを格納する
        *(stk->top) = elem;
        //現在のデータ数を1つ増やす
        stk->count++;
    }
}

//データの取り出し
char pop(stack *stk){
    char latest;
    //要素数が0以下になった場合取り出せない
    if(stk->count <= 0){
        fprintf(stdout, "Error: stack underflow.\n");
        exit(1);
    }
    else{
        //topの位置からデータを取り出す
        latest = *(stk->top);
        //topを1つ下に下げる
        stk->top++;
        //現在のデータ数を1つ減らす
        stk->count--;
        return latest;
    }
}
 
//出力
void print_stack(stack *stk){
    int i;
    //先頭の位置から、新しいデータに向かって順番にprint
    for (i=0;i < stk->count;i++){
        printf("%c",stk->data[SIZE-i-1]);
    }
    printf("\n");
}