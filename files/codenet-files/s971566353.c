#include<stdio.h>

int main(void){
  int j,m,n,i;
  while(fscanf(stdin,"%d %d",&m,&n)!=EOF&&m>=0&&n>=0){
    for(i=1,j=m+n;;i++){
      j/=10;
      if(j==0) break;
    }
    printf("%d\n",i);
  }
  return 0;
}