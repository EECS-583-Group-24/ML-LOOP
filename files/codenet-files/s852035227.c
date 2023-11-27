#include<stdio.h>

int main(){
	
	int a, b, o, j, i = 0;

	while(1){
		
		if(scanf("%d%d", &a, &b) == EOF){
			
			break;
			
		}
		
		j = 1;

		o = a + b;
		while(o >= 10){
		
			j++;
		
			o /= 10;
		
		}
		
		printf("%d\n", j);
		
		i++;
	
	}

    return 0;
}