#include <stdio.h>
int main(){
  char a[10];
  scanf("%s",&a[10]);
  for(int i=0;i<10;i++){
    if(a[i]=='B'){
      a[i]=a[i-1];
    }
  }
  else{
    printf("%s",a[10]);
  }
 printf("%s",a[10]);
  
  return 0;
}