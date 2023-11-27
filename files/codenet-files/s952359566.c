#include<stdio.h>
#include<stdlib.h>

#define SIZE 16

typedef struct node {
    char elem;
    struct node *next;
} node;

void push(node **first, char elem) {
    node *new = (node *)malloc(sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

char pop(node **first) {
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}

int main() {
    char input[SIZE] = {'\0'};
    char output[SIZE] = {'\0'};
    char *ptr_i, *ptr_o;
    node *first = NULL;
    
    scanf("%s", input);
    ptr_i = input;
    while(*ptr_i != '\0') {
        if(*ptr_i == 'B' && first != NULL) {
            pop(&first);
        } else if(*ptr_i == '0' || *ptr_i == '1') {
            push(&first, *ptr_i);
        }
        ptr_i++;
    }

    ptr_o = output;
    while(first != NULL) {
        *ptr_o = pop(&first);
        ptr_o++;
    }
    for(int i = SIZE - 1; i >= 0; i--) {
        if(output[i] == '\0') continue;
        printf("%c", output[i]);
    }
    printf("\n");

    return 0;
}
