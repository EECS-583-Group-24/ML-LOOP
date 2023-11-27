#include<stdio.h>
#include <stdlib.h>

int sift(int l, int r);

int main(){
	
	int n, a, i, j, ret, max, m_id, max2;
	int *A;
	
	max=m_id=max2=0;
		
	ret=scanf("%d", &n);
	
	if( ret == EOF ) {
    
    return 1;
		
  	}
	
	A=(int *)malloc(sizeof(int)*n);
	
	if(A == NULL){return 1;}
	
	for(i=0; i < n; i++){
		
		ret=scanf("%d", A+i);
		
		if( ret == EOF ) {
    
	    return 1;
			
	  	}
		
	}
	
	for(i=0; i < n; i++){
		if(max < *(A+i)){
			
			max=*(A+i);
			m_id=i;
			
		}
		
	}
	
	for(i=0; i < n; i++){
		
		if(max2 < *(A+i) && m_id != i){
			
			max2=*(A+i);
			
		}
		
	}
	
	
	for(i=0; i < n; i++){
		
		if(m_id != i){printf("%d\n", max);}
		else{printf("%d\n", max2);}

	}
	
	free(A);
	
	return 0; 
	
}


