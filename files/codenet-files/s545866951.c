#include <stdio.h>
int main(void){
char a[10];
  scanf("%s",&a);
  if(a[0]=='9'){a[0]='1';}
  else{a[0]='9';}
    if(a[1]=='9'){a[1]='1';}
    else{a[1]='9';}
    if(a[2]=='9'){a[2]='1';}
    else{a[2]='9';}
  printf("%s",a);
return 0;
 
}