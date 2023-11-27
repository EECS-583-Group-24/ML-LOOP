#include <stdio.h>

int main(){
  int x,y,xa,ya;
  int max[100];
  int d,i=0;
  
  scanf("%d %d",&x,&y);

  for(d=1 ;d<x || d<y; d++){
    ya=y%d;
    
    xa=x%d;
    
    if(ya==0 && xa==0){
      max[i]=d;
      i++;
    }
  }
  printf("%d",max[i-1]); 
    

   

return 0;
}

