#include<stdio.h>
int main(){
  int i;
  char s[4];
  scanf("%s",s);
  for(i=0;i<3;i++){
    if(s[i]=='1')
      printf("9");
    else if(s[i]=='9')
      printf("1");
    else
      printf("%c",s[i]);
  }
  puts("");
  return 0;
}
