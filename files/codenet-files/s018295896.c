#include<stdio.h>
int main(){
  int a,b;
  int s,c=0;
  while(scanf("%d %d",&a,&b)!=EOF){
    s=a+b;
    c=0;
    while(s!=0){
      s/=10;
      c++;
    }
    printf("%d\n",c);
  }
  return 0;
}