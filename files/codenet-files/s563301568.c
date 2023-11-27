#include<stdio.h>

int main(void) {

  int num1[200] , num2[200];

  int i;
  for(i = 1; i <= 200; i++){
    int num;
    scanf("%d" , &num);
    num1[i] = num;

    scanf("%d" , &num);
    num2[i] = num;
  }

  for(i = 1; i <= 200; i++){
    int keta1 = 0 ,keta2 = 0;
    while(num1[i] > 0){
      num1[i] /= 10;
      keta1++;
    }
    while(num2[i] > 0){
      num2[i] /= 10;
      keta2++;
    }
    printf("%d\n" , keta1 + keta2);
  }

  return 0;
}

