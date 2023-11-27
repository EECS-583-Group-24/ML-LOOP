/*
ex 9_1
tomatokan
*/

#include <stdio.h>
#include<stdlib.h>
#define LIM 12

typedef struct stack{//スタック
    int count;
    int msg[LIM];
    int *top;
}stack;

stack new_stack(){//初期化されたスタック(空)を返す。
    stack st;
    st.count=0;
    for(int i=0;i<LIM;i++){
        st.msg[i]=0;
    }
    st.top=st.msg;
    return st;
}

void push_stack(stack *st, int elem){
    if(st->count>=LIM){
        fprintf(stderr,"stack overflow");
        exit(1);
    }
    (st->count)++;
    st->msg[st->count-1]=elem;
    (st->top)++;
}

int pop_stack(stack *st){
    if(st->count<=0){
        fprintf(stderr,"stack underflow");
        exit(1);
    }
    (st->count)--;
    (st->top)--;
    return *(st->top);
}

void print_stack(stack *st){
    for(int i=0;i<st->count;i++){
        printf("%d",st->msg[i]);
    }
    printf("\n");
}

int is_empty(stack *st){
    if(st->count==0){
        return 1;
    }
    return 0;
}

int main(void){
    char input[12];
    char *ptr;
    stack st;
    ptr=input;
    fgets(input,12,stdin);//入力の読み取り
    st=new_stack();
    while(*ptr!='\0'&&*ptr!='\n'){
        if(*ptr=='0'){
            push_stack(&st,0);
        }else if(*ptr=='1'){
            push_stack(&st,1);
        }else{
            if(!is_empty(&st)){
                pop_stack(&st);
            }
        }
        ptr++;
    }
    print_stack(&st);//結果の表示
    return 0;
}