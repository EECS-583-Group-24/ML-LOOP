#include<stdio.h>

int main(){
  int n=0;
  scanf("%d",&n);
  int suretsu[n];
  int i=0;
  for(i=0;i<n;i++){
    scanf("%d",&suretsu[i]);
  }
  int answer[n];
  for(i=0;i<n+1;i++){
    answer[i]=suretsu[n-i-1];
  }

  for(i=0;i<n;i++){
    printf("%d", answer[i]);

    if(i==n-1){
        printf("\n");
    }else{
        printf(" ");
    }
  }
  return 0;
}