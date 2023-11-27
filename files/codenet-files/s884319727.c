/*  ex9_1
    Y_Aizaki  */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 20

typedef struct string
{
    int size;
    int count;
    char date[SIZE];
    char *top;
}string;

void initialize_string(string *str); // stringの初期化
void print_string_queue(string *str); // 先頭から取り出す
void push(string *str, char unit); // stringへの追加
char pop(string *str); // stringからの削除・取り出し

int main(void){
    string str;
    string *str_p = &str;
    char input[SIZE+1];
    // 標準入力を受け取る
    char *point = input;
    // inputからstrへ移す際のポインター
    char garbage;
    // popで取り出されるcharを捨てる場所

    scanf("%[01B]", input);

    initialize_string(str_p);
    // strの初期化
    
    while (*point){
        // Bだったらpop
        if (*point == 'B'){
            if (str_p->count != 0)
            {
                garbage = pop(str_p);
            }
        }
        // 0か1だったらpush
        else{
            push(str_p, *point);
        }
        point++;
    }

    print_string_queue(str_p);

    return 0;
}

void initialize_string(string *str){
    str->count = 0;
    str->size = SIZE;
    str->top = &(str->date[SIZE]);
}

void print_string_queue(string *str){
    char *point;

    point = &(str->date[SIZE-1]);

    for (int i = 0; i < str->count; i++){
        printf("%c", *point--);
    }
    putchar('\n');
}

void push(string *str, char unit){
    if (str->count >= str->size){
       printf("Error stack overflow. (unit=%c)\n", unit);
       exit(1);
    }
    else{
        str->top--;
        *(str->top) = unit;
        str->count++;
    }
}

char pop(string *str){
    char latest = '\0';
    if (str->count <= 0){
        printf("Error stack underflow.\n");
    }
    else{
        latest = *(str->top);
        str->top++;
        str->count--;
    }

    return latest;
}