#include<stdio.h>
int main(void) {
  int N,a[3],i;
  scanf("%d",&N);
  for(i=0;i<3;i++) {
    a[i]=N%10;
    N=(N-a[i])/10;
    if(a[i]==1) {a[i]=9;}
    else{a[i]=1;}
  }
  printf("%d",a[2]*100+a[1]*10+a[0]);
  return 0;
}
