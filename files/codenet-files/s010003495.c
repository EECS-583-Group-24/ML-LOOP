/*  ex9_1
    Rikuta  */
#include <stdio.h>
#include<stdlib.h>
//スタックに格納するデータの最大数
#define SIZE 10
//スタックの定義
typedef struct stack
{
    int size;
    int count;
    char data[SIZE];
    char *top;
} stack;
//スタックの初期化
void initialize_stack(stack *string);
//データの追加
void push(stack *string, char elem);
//データの取り出し
void pop(stack *string);
//stackの出力
void print_stack(stack *string);

int main(void)
{   
    //スタックを宣言
    stack string;
    //スタックを初期化
    initialize_stack(&string);
    while (1)
    {   
        //受け取る変数の宣言
        char temp_char;
        //入力
        scanf("%c", &temp_char);
        //入力が終了なら終わり
        if (temp_char=='\n')
        {
            break;
        }
        //Bが入力されたらスタックをpop
        if (temp_char=='B')
        {
            pop(&string);
        }
        //0,1ならそれをスタックにpush
        if (temp_char=='0'||temp_char=='1')        
        {
            push(&string, temp_char);
        }
    }
    //スタックを出力
    print_stack(&string);

    return 0;
}

//スタックの初期化
void initialize_stack(stack *string)
{   
    //スタックの要素数と最大の大きさとtopを初期化
    string->count = 0;
    string->size = SIZE;
    string->top = &(string->data[SIZE]);
}

//データの追加
void push(stack *string, char elem)
{   
    //スタックの長さが最大を超えていたら標準エラー出力
    if (string->count >= string->size)
    {
        fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
        exit(1);
    }
    else
    {   
        //スタックのtopは一個戻り，戻ったtopに要素が入る．要素数が1増える．
        string->top--;
        *(string->top) = elem;
        string->count++;
    }
}

//データの取り出し
void pop(stack *string)
{   
    //データに何も入っていなかったら
    if (string->count > 0)
    {   
        //スタックのトップを奥へ，要素数が1減る
        string->top++;
        string->count--;
    }
}

void print_stack(stack *string)
{   
    //ポインタの宣言
    char *pointer;
    //ポインタはスタックの一番古い要素を指す
    pointer = string->top+string->count-1;
    for (int i = 0; i < string->count; i++)
    {   
        //ポインタがさす要素を新しくしながら出力していく．
        printf("%c", *(pointer--));
    }
    //改行
    printf("\n");
}
