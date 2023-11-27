#include<stdio.h>
int up(const void *a,const void *b){
  return *(int *)a - *(int *)b;
}
int main(void){
  int n;
  scanf("%d",&n);
  int a[n] , b[n];
  for(int i = 0;i < n;i ++){
    scanf("%d",&a[i]);
    b[i] = a[i];
  }
  qsort(a,n,sizeof(int),up);
  for(int  i = 0;i < n;i ++){
    if(b[i] == a[n-1]){
      printf("%d\n",a[n-2]);
    }
    else{
      printf("%d\n",a[n-1]);
    }
  } 
  return 0;
}