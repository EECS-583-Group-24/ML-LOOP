/* ex 9_1
   kanon */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//スタックに格納するデータの最大数
#define SIZE 1000

//スタックの定義
typedef struct stack
{
    int size;
    int count;
    char data[SIZE];
    char *top;
} stack;

//スタックの初期化
void initialize_stack(stack *stk)
{
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->data[SIZE]);
}

//データの追加
void push(stack *stk, char elem)
{
    if (stk->count >= stk->size)
    {
        fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
        exit(1);
    }
    else
    {
        stk->top--;
        *(stk->top) = elem;
        stk->count++;
    }
}

//データの取り出し
char pop(stack *stk)
{
    char latest;
    if (stk->count <= 0)
    {
        fprintf(stdout, "Error: stack underflow.\n");
        exit(1);
    }
    else
    {
        latest = *(stk->top);
        stk->top++;
        stk->count--;
        return latest;
    }
}

int main(void)
{
    stack stk;
    char input_char;
    //スタックを初期化（ポインタ渡しで関数にわたすこと）
    initialize_stack(&stk);

    //スタックにデータを追加
    while(1)
    {
        scanf("%c", &input_char);
        if (input_char == '\n')
            break;
        //Bがきてないならスタックに文字を追加
        //もしBがきたらスタックの一番上の文字を取り除く
        //スタックにデータがないときBがきたらなにもしない
        if (input_char != 'B')
        {
            push(&stk, input_char);
        }
        else if (stk.count > 0)
        {
            //スタックからデータを取り出す
            pop(&stk);
        }
    }


    for (int i = 0; i < stk.count; i++)
    {
        printf("%c", stk.data[SIZE - 1 - i]);
    }
    printf("\n");
    return 0;
}
