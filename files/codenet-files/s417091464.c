#include <stdio.h>

int main(void){
  char c;
  int i;
  for(i=0;i<3;i++){
    scanf("%c",&c);
    if(c=='1') printf("%d",9);
    if(c=='9') printf("%d",1);
  }
  
  printf("\n");
  return 0;
}