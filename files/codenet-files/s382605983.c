#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a[200005];

int main(void){
  int N,i,num,first,second;
  char str[100],*p;
  
  fgets(str,sizeof(str),stdin);
  N=atoi(str);
  
  for(i=0,first=0,second=0;i<N;i++){
    fgets(str,sizeof(str),stdin);
    a[i]=atoi(str);
    if(first<=a[i]){
      second=first,first=a[i];
    }else if(second<a[i]){
      second=a[i];
    }
  }
  
  for(i=0;i<N;i++){
    if(a[i]==first){
      printf("%d\n",second);
    }else{
      printf("%d\n",first);
    }
  }
  
  
  return 0;
  
}