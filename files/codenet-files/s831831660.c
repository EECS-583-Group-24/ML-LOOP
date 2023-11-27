#include<stdio.h>


int main(void){
	int n=0;
  	int a[20000];
    int b[20000];
    int i,j;
  	int max=0;
  //setvbuf(stdout, NULL, _IONBF, 0); 
    
  scanf("%d",&n);

  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
   b[i]=a[i];
   
  }
	 

  
  for(i=0;i<n;i++){
    b[i]=0;
    
    for(j=0;j<n;j++){
       if(b[j]>=max){ 
        max=b[j];
      }
    	
    }
    
   printf("%d\n",max);              
   b[i]=a[i];
  }
  
  return 0;
}
  