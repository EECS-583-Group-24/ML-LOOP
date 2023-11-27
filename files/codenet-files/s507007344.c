#include<stdio.h>
int main(){
	int a,i=0,u=0,e=0,o,yama[201];
	while(scanf("%d %d",&a,&i)!=EOF){
		
		o=a+i;
		for(u=0;o!=0;u++){
			o/=10;
		}
		yama[e]=u;
		e++;
	}
	for(u=0;u<e;u++){
		printf("%d\n",yama[u]);
	}
	return 0;
	
	
}