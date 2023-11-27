#include<stdio.h>


int main(){
  char s[10];
  char ans[10];
  int k=0;
  scanf("%s",&s);
  for(int i=0;s[i]!='\0';++i){
    if(s[i]=='0' ||s[i]=='1'){
      ans[k]=s[i];
      ++k;
    }
    else{
      if(k!=0){
        --k;
      }
    }
  }
  ans[k]='\0';
  printf("%s",ans);
  return 0;
}
