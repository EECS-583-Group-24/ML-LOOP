#include<stdio.h>
int main(void){
  char X[4];scanf("%s",X);
  for(int i=0;i<3;i++){
    if(X[i]=='1'){
      printf("9");
    }else{
      printf("1");
    }
  }
  putchar('\n');
  return 0;
}
