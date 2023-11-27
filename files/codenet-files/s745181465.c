#include<stdio.h>
int main(void){

  int lenOfSeq = 0,i = 0,term[100] = {};

  scanf("%d",&lenOfSeq);

  for(i = 0;i <= lenOfSeq - 1; i = i + 1){
    scanf(" %d",&term[i]);
  }

  for(i = lenOfSeq - 1; i >= 0; i = i - 1){
    printf("%d",term[i]);
    i != 0 ? printf(" "):printf("\n");
  }
  return 0;
}