#include <stdio.h>

int main(){
	int n;
    int a[200000];
    int i;
    int k;
    int max,second_max;
  
  	scanf("%d",&n);
  	for(i=0; i<n; i++){
  		scanf("%d",&a[i]);
  	}
  
   	max = a[0];
    second_max = a[0];
  	for(i=0; i<n; i++){
        if (max < a[i]) {
            second_max = max;
            max = a[i];
        }else if(second_max == a[i]){
            second_max = a[i];
        }
    }
   
  
    for(i=0; i<n; i++){
        if(max == a[i]){
           printf("%d\n",second_max);
        }else{
           printf("%d\n",max);
        }
    }
  
   	return 0;
}