/* ex 9_1
   hangan2020 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

typedef struct stack{
   int size;
   int count;
   char data[SIZE];
   char *top;
} stack;

void initialize_stack(stack *stk){
   stk->count = 0;
   stk->size = SIZE;
   stk->top = &(stk->data[SIZE]);
}

void push(stack *stk, char elem){
   if(stk->count >= stk->size){
      fprintf(stderr, "Error: Stack overflow\n");
      exit(1);
   }
   else{
      stk->top--;
      *(stk->top) = elem;
      stk->count++;
   }
}

void pop(stack *stk){
   //char latest;
   /*if(stk->count <= 0){
      fprintf(stderr, "Error: Stack underflow\n");
      exit(1);
   }*/
   else{
      //latest = *(stk->top);
      stk->top++;
      stk->count--;
   }
}

void print_stk(stack *stk){
   char *p;
   p = stk->top;
   for(int i = 0; i < stk->count; i++){
      printf("%c", *p);
      p++;
   }
   printf("\n");
}

int main(void){
   stack stk;
   char string[SIZE];
   int i = 0;

   initialize_stack(&stk);
   scanf("%s", &string);
   
   while(string[i] != '\0'){
      if(string[i] == 'B'){
         if(stk.count != 0){
            pop(&stk);
         }
      }else{
         push(&stk, string[i]);
      }
      i++;
   }

   print_stk(&stk);

   return 0;

}