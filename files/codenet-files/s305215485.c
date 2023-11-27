#include<stdio.h>

int main(void)
{
  int n = 0;
  int a = 0;
  int i = 0;
  int j = 0;
  int max = 0;
  int num[200000];
  
  do{
    scanf("%d", &n);
  }while(n < 1 || n > 200000);

  for(i = 0; i < n; i++){
    do{
      scanf("%d", &num[i]);
    }while(a < 1 || a > 200000);
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(max <= num[j] || i != j){
        max = j;
      }
    }
    printf("%d\n", max);
  }
  return 0;
}