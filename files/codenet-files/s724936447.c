#include <stdio.h>
int main(){
  int i,n,j,d[101],t;
  
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&d[i]);
  }
  
  
  /* if(d[1]<d[n]){
    for(i=1;i<=n;i++){
      for(j=1;j<=n-1;j++){
       if(d[j]<d[j+1]){
	 t=d[j];
	 d[j]=d[j+1];
          d[j+1]=t;
       }
     }
    }
  }
  
  else if(d[1]>d[n]){
    for(i=1;i<=n;i++){
      for(j=1;j<=n-1;j++){
       if(d[j]>d[j+1]){
	 t=d[j];
	 d[j]=d[j+1];
	 d[j+1]=t;
       }
      }
    }
  }
  */
  if(d[1]<d[n]){
  for(i=n;i>=1;i--){
    if(i==1)printf("%d",d[i]);
    else printf("%d ",d[i]);
  }
  }
 if(d[1]>d[n]){
  for(i=1;i<=n;i++){
    if(i==n)printf("%d",d[i]);
    else printf("%d ",d[i]);
  }
  }
  
 //  printf("\n");
  return 0;
}