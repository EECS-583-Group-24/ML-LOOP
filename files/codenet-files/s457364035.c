#include<stdio.h>

int gcd(int i, int j);

int main(){
  int i,j;
  int gcd_num;

  scanf("%d %d", &i,&j);

  gcd_num=gcd(i,j);

  printf("%d", gcd_num);
  printf("\n");

  return 0;

}

int gcd(int i, int j)
{
  int n;

  if(i==0||j==0){
    fprintf(stderr, "引数エラーです。\n");
    return 0;
  }

  while((n=i%j)!=0)
    {
      i=j;
      j=n;
    }
  return j;
}