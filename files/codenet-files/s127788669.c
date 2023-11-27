/*  ex9_1
    kento_titech*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define SIZE 11
typedef struct {
    int size;
    int count;
    char data[SIZE];
    char *tail;
    char *head;
} stack;

void initialize_stack(stack *stk);
void print_stack(stack *stk);
void push(stack *stk, char x);
void pop(stack *stk);

stack stk;

int main(void){
    initialize_stack(&stk);
    char input[SIZE];
    int i;
    scanf("%s",input);
    for(i=0;i<strlen(input);i++){
        if(input[i]=='1'||input[i]=='0'){
            push(&stk,input[i]);
        }
        else
            pop(&stk);
    }
    print_stack(&stk);
    printf("\n");
    return 0;
}

void initialize_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->head=&(stk->data[0]);
    stk->tail=&(stk->data[0]);
}

void push(stack *stk,  char x){    
    *(stk->tail) = x;
    stk->tail++;
    stk->count++;
}

void pop(stack *stk){
    if(stk->count > 0){
        stk->tail--;
        stk->count--;
    }
}

void print_stack(stack *stk){
    char *p;
    int i;    
    p = stk->head;
    for(i=0;i< stk->count;i++)
        printf("%c",*p++);
}