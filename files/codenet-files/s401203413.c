/* ex 9_1
   KitamoriFumiya */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 11
// スタックの定義
typedef struct stack{
	int size;
	int count;
	char data[SIZE];
	char *top;
} stack;

void initialize_stack(stack *stk);
void print_stack(stack *stk);
void push(stack *stk, char elem);
char pop(stack *stk);

int main(void){
	stack stk;
	char input[11], *ptr_input; // キーボードでの入力を格納するための配列とポインタ
	initialize_stack(&stk); // スタックを初期化
	scanf("%s", input); // 文字列の入力
	ptr_input = input;
	while(*ptr_input){
		// 文字がBであり、その前の文字があればそれを消す
		if(*ptr_input == 'B'){
			if(stk.count>0){
				pop(&stk);
			}
		}
		// そうでなければデータを追加
		else{
			push(&stk, *ptr_input);
		}
		++ptr_input;
	}
	// 出力
	print_stack(&stk);
	return 0;
}

// スタックの初期化
void initialize_stack(stack *stk){
	stk->count = 0;
	stk->size = SIZE;
	stk->top = &(stk->data[SIZE]);
}

// データの追加
void push(stack *stk, char elem){
	if(stk->count >= stk->size){
		fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
		exit(1);
	}else{
		stk->top--;
		*(stk->top) = elem;
		stk->count++;
	}
}

// データの取り出し
char pop(stack *stk){
	char latest;
	if(stk->count <= 0){
		fprintf(stdout, "Error: stack underflow.\n");
		exit(1);
	}else{
		latest = *(stk->top);
		stk->top++;
		stk->count--;
		return latest;
	}
}

// スタックの中身を逆順に取り出す
void print_stack(stack *stk){
	char output[11], *ptr_output;
	int i;
	ptr_output = stk->top;
	for(i = stk->count; i > 0; i--){
		output[i-1] = *ptr_output;
		ptr_output++;
	}
	printf("%s\n", output);
}