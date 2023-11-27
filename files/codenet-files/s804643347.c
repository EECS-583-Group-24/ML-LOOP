#include <stdio.h>
int main(){
  int x;
  scanf("%d",&x);
  int data[x];
  for(int i = 0; i < x; i++)scanf("%d",&data[i]);
  for(int i = x-1; i > 0; i--)printf("%d ",data[i]);
  printf("%d",data[0]);
  return 0;
}