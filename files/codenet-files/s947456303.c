#include<stdio.h>
int main(void){
  char box[10],a[10];
  int cnt=0:
  for(int i=0;a[i]!="\0";i++){
    scanf("%c",&a[i]);
    if(a[i]=='0'||a[i]=='1') {
      box[cnt]=a[i];
      cnt++;
    }else if(key=='B'){
      box[i-1]=' ';
    }
    i=0;
    while(box[i]!="\0"){
      printf("%s",box[i]);
    }
  return 0;
}