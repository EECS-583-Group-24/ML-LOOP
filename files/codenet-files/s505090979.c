#include <stdio.h>
#include <math.h>

int main(){
	
	float a,b,sum=0;
	int i=0,k=1;
   /*input a,b*/

	for (i=1;;i++){
		scanf("%f %f",&a,&b);
		if (a<1000000 & b<1000000){
			break;
		}
		else{
			printf("Both a and b need <1,000,000");
		}
	}
	printf("a:%.0f b:%.0f\n",a,b);
	sum=a+b;
	printf("sum:%.0f\n",sum);
	
	for (i=1;i<=10;i++){
		if ((sum/pow(10,i))>1){
			k+=1;
		}
		else{
			break;
		}
		
	}
	printf("%d",k);
return 0;	
}
