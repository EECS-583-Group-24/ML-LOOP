#include<stdio.h>
char c;
int main(){
  while((c=getchar())!=10){
    switch(c){
      case '1': c='9'; break;
      case '9': c='1'; break;
    }
    putchar(c);
  }
}
