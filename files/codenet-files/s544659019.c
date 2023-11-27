#include<stdio.h>
  
int main(){
  
int a,b,digit;
digit=0  
while(scanf("%d %d\n", &a, &b) != EOF){
    scanf("%d %d",&a,&b);
  
  while(a+b!=0)
  {
     a+b=(a+b)/10;
     digit+=digit;
  }
  printf("%d\n",digit);  

}
  
    return 0;
}