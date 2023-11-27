#include<stdio.h>
#include<math.h>
int main(void){
  int m,n;
  while(fscanf(stdin,"%d %d",&m,&n)!=EOF){
    printf("%d\n",(int)log10(m+n));
  }
  return 0;
}