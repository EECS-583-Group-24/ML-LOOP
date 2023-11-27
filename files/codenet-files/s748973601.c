/*  ex9_1
    L40S38  */
#include<stdio.h>
#include<stdlib.h>

typedef struct stack{
    int row[11];
    //入力される文字列は最大10文字+ヌル文字
    int letter_num;
    //文字列の長さ
}stack;

void push(stack *stack_p,char *letter){
    //stackの文字列の最後にletterを加える
    stack_p->row[stack_p->letter_num]=*letter;
    stack_p->letter_num++;
    return;
}

void pop(stack *stack_p){
    //stackの文字列の最後の文字を削除
    if(stack_p->letter_num!=0){
        stack_p->letter_num--;
        stack_p->row[stack_p->letter_num]='\0';
    }
    return;
}

int main(void){
    stack *Stack;
    Stack=(stack*)calloc(1,sizeof(stack));
    if(Stack==NULL){
        printf("ERROR");
        return -1;
    }
    char input[11];
    //input:入力された'0','1','B'のみでできた文字列

    int i=0;

    //入力された文字列をinputに格納
    scanf("%s",input);

    //input[i]ごとにStack中の文字列における処理を変更
    while(input[i]){
        if(input[i]=='B'){
            //バックスペースキーの時はpop操作
            pop(Stack);
        }
        else{
            //それ以外の時はpush操作
            push(Stack,&input[i]);
        }
        i++;
    }
    i=0;

    //結果の出力
    printf("%s\n",Stack->row);
    free(Stack);
    return 0;

}