#include<stdio.h>

int main(void){
	
	
	int a,b,i,gcd,m;
	
	
	scanf("%d %d ",&a,&b);
	
	if(a>b){
		m=a;
	}
	else
	m=b;
	for(i=m;i>=0;i--){
		if(a%i==0 &&  b%i==0){
			gcd=i;
			break;
			
		}
	}
	printf("%d \n",i);

	return 0;
	
}
}