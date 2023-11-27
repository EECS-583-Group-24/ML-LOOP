#include<stdio.h>

int main (){

  int i,j,k;

  scanf("%d",&i);
  int d[i];
  for(j=0;j<i;j++){
    scanf("%d",&d[j]);
          }
      for(k=i-1;k>=0;k--){
        printf("%d ",d[k]);
      }
    printf("\n");
  return 0;
}