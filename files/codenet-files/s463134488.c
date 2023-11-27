/*  ex9_1
    Acro   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10000

typedef struct{
    int size;
    int count;
    char data[SIZE];
    char *top;
} stack;
void initialize_stack(stack *stk);
void print_stack(stack *stk);
void push(stack *stk, char x);
char pop(stack *stk);

stack stk;

int main(void){
    int i;
    char string[SIZE];
    scanf("%s",string);
    initialize_stack(&stk);
    for ( i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'B')
        {
            if (stk.count > 0)
            {
                pop(&stk);
            }
            
        }
        else
        {
            push(&stk,string[i]);
        }
        
    }
    for ( i = 0; i < stk.count; i++)
    {
        printf("%c",stk.data[SIZE-1-i]);
    }
    printf("\n");
    return 0;
}



void initialize_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->data[SIZE]);
}

void push(stack *stk, char x){
    if (stk->count >= stk->size)
    {
        printf("Error : stack overflow\n");
        exit(1);
    }
    else{
        stk->top--;
        *(stk->top) = x;
        stk->count++;
    }
}

char pop(stack *stk){
    char x;
    if(stk->count <= 0)
    {
        printf("Error : stack underflow\n");
        exit(1);
    }
    else
    {
        x = *(stk->top);
        stk->top++;
        stk->count--;
        return x;
    }
    
}