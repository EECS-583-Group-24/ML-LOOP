#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
char s[10];
scanf("%s",s);
for(count=0;s[count]!='\0';count++){
if(s[count]=='9'){s[count]='1';count++;}
else if(s[count]=='1'){s[count]='9';count++;}
}
  printf("%s",s);
return 0;
}