#include<stdio.h>
int main()
{
  int a,b[10000],c,d,s,i;
  scanf("%d",&a);
  for(i=0;i<a;i++){
    scanf("%d",&b[i]);
  }
  d=a-1;
  for(i=d;i>=0;i--){
    if (i>0)printf("%d ",b[i]);
    else printf("%d",b[i]);
  }
  printf("\n");
  return 0;
}
