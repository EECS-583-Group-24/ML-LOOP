/*  ex9_1
    B30095    */
#include <stdio.h>
#include <stdlib.h>

// stack size
#define SIZE 1000

// definition of stack
typedef struct stack{
    int size;  // stack size
    int count; // number of data
    char data[SIZE];
    char *top;
} stack;

void print_stack_from_bottom(stack *stk);
void initialize_stack(stack *stk);
char pop(stack *stk);
void push(stack *stk, char elem);



int main(void){
    stack stk;
    char ch;

    initialize_stack(&stk);
    
    // process input with stack
    while(1){
        ch = getchar();
        if(ch == '\n' || ch == EOF || ch == '\0') break;  /// end loop if the end of input is reached

        if(ch == 'B'){
            if(stk.count > 0){
                pop(&stk);  // pop an element if backspace is entered and stack is not empty
            }
        }
        // push to stack if character other than backspace is entered
        else{
            push(&stk, ch);
        }
    }

    // print out the stack
    print_stack_from_bottom(&stk);

    return 0;
}

void print_stack_from_bottom(stack *stk){
    int i;
    for(i = 0; i < stk->count; i++){
        putchar(stk->data[stk->size - i - 1]);
    }
}

// initialize a stack to be empty
void initialize_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->data[SIZE]);  // top is at the end of the array
}

// stack push operation
void push(stack *stk, char elem){
    if(stk->count >= stk->size){  // stack overflow
        fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
        exit(1);
    }
    else{  // push an element
        stk->top--;
        *(stk->top) = elem;
        stk->count++;
    }
}

// stack pop operation
char pop(stack *stk){
    char latest;
    if(stk->count <= 0){  // stack underflow
        fprintf(stdout, "Error: stack underflow.\n");
        exit(1);
    }
    else{  // pop an element
        latest = *(stk->top);
        stk->top++;
        stk->count--;
        return latest;
    }
}