#include<stdio.h>
int main(){
 
  int a,b,s,r;
 
  scanf("%d", &a);
  scanf("%d", &b);
 
  if(a<b){
    s = a;
    a = b;
    b = s;
  }
 
  r = a % b;
  while(r!=0){
    a = b;
    b = r;
    r = a % b;
  }
  
  printf("%d\n",b); 
  return 0;
}

