#include<stdio.h>

int main(void){
  int i;
  char a[3];
  for(i=0;i<3;i++){
    a[i] = getchar();
  }
  
  for(i=0;i<3;i++){
    if(a[i]=='1'){
      a[i] = '9';
    }else if(a[i]=='9'){
      a[i] = '1';
    }
  }
    
  printf("%s\n",a);
    
  return 0;
}