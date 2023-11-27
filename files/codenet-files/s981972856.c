#include<stdio.h>

int main(){
 int a=0,b=0;
 char S[11],T[11];
 scanf("%s",S );

 while (1) {
   if (S[a]=='\0') {
     printf("%s\n",T);
     return 0;
   }else if (S[a]=='B') {
     b--;
   }else{
     T[b]=S[a];
     b++;
   }
   a++;
 }
}