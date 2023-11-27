/* ex9_1
    sak_Citrue  */

#include <stdio.h>
#include <stdlib.h>

//双方向リストの構造体
typedef struct node{
    char elem;
    struct node *prev;
    struct node *next;
}node;

//リストの後ろ側に追加
void push(node **first,node **last,char elem){
    node *new = (node*)malloc(sizeof(node));
    if(new == NULL)exit(1);
    new->elem = elem;
    new->next = NULL;
    new->prev = *last;
    if(*first == NULL) *first = new;
    (*last)->next = new;
    *last = new;
}

//末端から取り出す
char pop(node **last){
    char elem;
    node *tmp = *last;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *last = tmp->prev;
    free(tmp);
    return elem;
}

//先頭から取り出す
char popleft(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL)exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}

int main(void){
    char elem;
    //キューの長さ
    int count = 0;

    node *first = NULL,*last;
    
    while(1){
        elem = fgetc(stdin);
        //scanf("%c",&elem);
        if(elem == '\n')break;
        //Bキーで1文字破棄、それ以外は末端に追加
        if(elem == 'B'){
            //キューが空の状態でpopしないように
            if(count>0){
                pop(&last);
                count--;
            }
        }
        else{
            push(&first,&last,elem);
            count++;
        }
    }
    while(count-->0){
        //先頭から取り出す
        printf("%c",popleft(&first));
    }
    printf("\n");
    return 0;
}