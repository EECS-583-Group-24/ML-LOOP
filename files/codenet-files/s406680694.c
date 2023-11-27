//Atcoder-Begginer-Contest
//2018/10/1
//A

#include<stdio.h>

int main(void)
{
  int s;
  int a;
  scanf("%d",&s);
  if(s%10==1){
    a = 9;
  }
  else{
    a = 1;
  }
  if(((s/10)%10)==1){
    a += 90;
  }
  else{
    a += 10;
  }
  if((s/100)==1){
    a += 900;
  }
  else{
    a += 100;
  }
  printf("%d\n",a);
  return 0;
}
