/* 134c */
#include<stdio.h>
#include<math.h>
int main(void)
{
  int n,i,a[200000],j,m,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<2;i++){
    for(j=i+1;j<n;j++){
      if(a[i]<a[j]){
	if(a[0]<a[j]){
	  c=j;
	}
      m=a[i];
      a[i]=a[j];
      a[j]=m;
      }
    }
  }
  for(i=0;i<n;i++){
    if(i!=c){
      printf("%d\n",a[0]);
    }
    if(i==c){
      printf("%d\n",a[1]);
    }
  }
  return 0;
}
