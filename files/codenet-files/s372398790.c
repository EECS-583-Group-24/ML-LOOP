#include <stdio.h>;
int main(){
	int a,b,c,count;
	while(scanf("%d %d",&a,&b)!=EOF){
		c=a+b;
		count=1;
		while(c>=10){
			c/=10;
			count++;
		}
		printf("%d\n",count);
	}
return 0;
}