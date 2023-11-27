#include<stdio.h>
#include<string.h>
int main(void)
{
  int n,i,j,keta[4];
  scanf("%d",&n);
  i=1;
  while(n>0){
    keta[i] = n%10;
    if(keta[i]==1){
      keta[i]=9;
    }else if(keta[i]==9){
      keta[i]=1;
    }
    n /= 10;
    i++;
  }
  for(j=i-1;j>0;j--){
    printf("%d",keta[j]);
  }
  return 0;
}
