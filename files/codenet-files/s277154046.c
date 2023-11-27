/*
    ex9_1
    takaoga
 */
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
typedef struct{
    int size;
    int count;
    char data[SIZE];
    char *top;
    char *bottom;
} stack;

void initialize_text(stack *text){
    text->count = 0;
    text->size = SIZE;
    text->top = &(text->data[SIZE]);//topはpushやpopをする毎に変動する。
    text->bottom = &(text->data[SIZE]);//data[10]を底と見なす。これは動かない。
}

void push(stack *text, char textcharacter){
    *(text->top) = textcharacter;
    text->top--;
    text->count++;
}

void pop(stack *text){
    text->top++;
    text->count--;
}

void print_text(stack *text){
    char *textbottom;
    textbottom = text->bottom;
    for(int i = 0 ; i < text->count ; i++){
        printf("%c", *textbottom--);//botomから遡って出力することで、最初に入力した文字の順番で出力される
    }
    printf("\n");
}

stack text;

int main(void){
    char inputtext[10],*nowtext;
    initialize_text(&text);//初期化
    scanf("%s",inputtext);
    nowtext = &(inputtext[0]);
    while(*nowtext != '\0'){
        if(*nowtext == '0' || *nowtext == '1'){
            push(&text, *nowtext);//もし現在のもじが1か0であればpush
        }else if(*nowtext == 'B'){
            if(text.top != text.bottom){
                pop(&text);//もし現在の文字がBでありかつ文字列が空でなければpop
            }
        }
        nowtext++;
    }
    print_text(&text);
    return 0;
}

