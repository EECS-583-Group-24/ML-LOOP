/*  ex9_1 Stack (Keyboard)
    pandacodeb  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

typedef struct stack{
    int size;
    int count;
    char data[SIZE];
    char *top;
}stack;

void init_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->data[SIZE]);
}
void push(stack *stk, char key){
    if (stk->count >= stk->size)
        exit(1);
    else{
        stk->top--;
        *(stk->top) = key;
        stk->count++;
    }
}

char pop(stack *stk){
    char latest;
    if (stk->count <= 0){
        return ' ';
    }
    else{
        latest = *(stk->top);
        stk->top++;
        stk->count--;
        return latest;
    }
}

void print_s(stack *stk){
    char *ptr;
    ptr = (stk->top)+(stk->count)-1;
    for (int i = 0; i < stk->count; i++)
        printf("%c", *ptr--);
    printf("\n");
}

int main(void){
    int i;
    char del;
    char* text;
    text = (char*) malloc(sizeof(char)*10);
    scanf("%s", text);

    stack stk;
    init_stack(&stk);

    for (i = 0; i < strlen(text); i++){
        if (text[i] == '0' || text[i] == '1')
            push(&stk, text[i]);
        else if (text[i] == 'B')
            del = pop(&stk);
    }

    print_s(&stk);
    
    return 0;
}