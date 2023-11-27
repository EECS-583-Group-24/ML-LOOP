/* ex 9_1
   offNaria */

#include <stdio.h>
#include <stdlib.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node
{
    char elem;
    struct node *next;
} node;

void push(node **first, char elem); //スタックにデータを追加
char pop(node **first);             //スタックからデータを取り出す

int main(void)
{
    char input[11], output[11];
    //最初のノードの指す先
    node *first = NULL;
    //スタックにノードを追加
    scanf("%s", input);
    for (int i = 0; i < 11; i++)
    {
        //'0'か'1'ならスタックに挿入
        if (input[i] == '0' || input[i] == '1')
        {
            push(&first, input[i]);
        }
        //'B'ならスタックの一番上のものを取り出す
        else if (input[i] == 'B')
        {
            pop(&first);
        }
        else
        {
            break;
        }
    }
    //スタックの逆順に出力
    for (int i = 0; i < 11; i++)
    {
        output[10 - i] = pop(&first);
    }
    for (int i = 0; i < 11; i++)
    {
        if (output[i] != 'x')
        {
            printf("%c", output[i]);
        }
    }
    printf("\n");
    return 0;
}

void push(node **first, char elem)
{
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if (new == NULL)
        exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

char pop(node **first)
{
    char elem;
    node *tmp = *first;
    if (tmp != NULL)
    {
        elem = tmp->elem;
        *first = tmp->next;
        //取り出したノードのメモリを解放
        free(tmp);
        return elem;
    }
    //スタックの一番下またはスタックが空であれば目印記号'x'を返す
    else
    {
        return 'x';
    }
}
