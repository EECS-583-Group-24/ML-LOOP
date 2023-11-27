#include<stdio.h>
int main(){
	int a,i=0,u=0,e=0,o,yama[100];
	while(1){
	scanf("%d %d",&a,&i);
		o=a+i;
		for(u=0;o!=0;u++){
			o/=10;
		}
		yama[e]=o;
		e++;
	}
	for(u=0;u<e;u++){
		printf("%d\n",yama[u]);
	}
	return 0;
	
	
}