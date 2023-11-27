#include<stdio.h>
#include <string.h>

void main(){
  char str[256];
  int i,len,array[10],ind;
  ind=0;
  scanf("%s",str);
  len=strlen(str);
  
  // 入力
  for(i=0;i<len;i++){
    if(str[i]==48){
      array[ind++]=0;
    }else if(str[i]==49){
      array[ind++]=1;
    }else{
      ind--;
    }
  }
  
  //出力
  for(i=0;i<ind;i++){
    printf("%d",array[i]);
  }
}