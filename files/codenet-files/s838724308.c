#include<stdio.h>
#include<math.h>
int main(void){
  int m,n;
  char str[100];
  while(fgets(str,100,stdin)!=NULL){
    fscanf(str,"%d %d",&m,&n);
    printf("%d\n",(int)log10(m+n));
  }
  return 0;
}