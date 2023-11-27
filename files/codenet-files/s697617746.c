#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){

  int i;
  char s[11];
  char a[11];
  int l, r;

  scanf("%s", s);

  l = strlen(s);
  r = strlen(a);

  for(i=0; i<=10; i++){
    a[i] = '\0';
  }



  for(i=0; i<=l-1; i++){
    r = strlen(a);

    if(s[i] == 'B'){
      if(r != 0){
        a[r-1] = '\0';
      }
    }else{
      a[r] = s[i];
    }
    //printf("%s\n", a);
  }







/*

  for(i=0; i<=l-1; i++){
    r = strlen(a);

    if(s[i] == '0'){
      a[r] = '0';
    }else if(s[i] == '1'){
      a[r] = '1';
    }else if(s[i] == 'B'){
      if(r != 0){
        a[r-1] = '\0';
      }
    }
    //printf("%s\n", a);
  }

  */



  printf("%s\n", a);

  return 0;
}
