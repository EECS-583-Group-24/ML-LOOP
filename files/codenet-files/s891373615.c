#include <stdio.h>

int keta(int a);

int main(){
	int a,b,status,sum,answer;
	do{
		status=scanf("%d%d",&a,&b);
		sum=a+b;
		answer=keta(sum);
		printf("%d\n",answer);
	}while(status!=EOF);
	return 0;
}

int keta(int a){
	int i;
	for(i=0;a>0;i++){
		a/=10;
	}
	return i;
}