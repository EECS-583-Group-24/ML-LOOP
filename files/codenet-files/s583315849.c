#include<stdio.h>
int main(void)
{
	int i,a,x[10],b,c;
	for(i=0;i<3;i++){
		scanf("%d%d",&a,&b);
		x[i]=0;
		x[i]=a+b;
	}
	b=1; c=0;
	for(i=0;i<3;i++){
		while(1){
			if(x[i]/b!=0){
				c++;
				b*=10;
			}
			else break;
		}
		printf("%d\n",c);
	}
	return 0;
}