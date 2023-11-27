/*  ex9_1
    pptenshi  */

#include<stdio.h>
#include<stdlib.h>
#define SIZE 11

typedef struct stack {
    char elem;
    struct stack *next;
}stack;


void push(stack **first, char elem)  {
    stack *new = calloc(1, sizeof(stack));
    if (new == NULL) exit(1);

    new->elem = elem;
    new->next = *first;
    *first = new;
}


char pop(stack **first) {
    char elem;
    stack *tmp = *first;

    // 要素がない場合は'2'を返す
    if (tmp == NULL) {
        return '2'; 
    }

    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}


// 出力
void print_string(stack *first) {
    stack *stack_prt = NULL;
    char elem;

    // stack_ptrに入れなおして出力
    while ((elem = pop(&first)) != '2') {
        push(&stack_prt, elem);
    }
    while ((elem = pop(&stack_prt)) != '2') {
        putchar(elem);
    }
    putchar('\n');
}


int main(void) {
    char string[SIZE];      // s
    char *p_str;            // sのポインタ
    stack *first = NULL;    // 文字列を入れるスタック

    // input
    scanf("%s", string);
    p_str = string;

    
    while(*p_str) {
        switch (*p_str)
        {
        case '0': case '1':
            push(&first, *p_str);
            break;
        case 'B':
            pop(&first);
            break;
        }
        p_str++;
    }


    // output
    print_string(first);


    return 0;
}