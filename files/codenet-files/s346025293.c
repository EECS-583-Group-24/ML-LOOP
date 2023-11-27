#include <stdio.h>
int main(){
  char a[10];
  scanf("%s",&a);
  for(int i=0;i<10;i++){
    if(a[i]=='B'){
      a[i]=a[i-1];
    }
  }
 printf("%s",a);
  
  return 0;
}