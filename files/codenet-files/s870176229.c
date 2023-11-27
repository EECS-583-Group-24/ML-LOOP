#include<stdio.h>

int main(){
int a,b;
int x;
int i=0;

while(scanf("%d %d",&a,&b)!=EOF){
x=a+b;
while(x>=1){
x=x/10;
i++;
	}
	
printf("%d\n",i);
}

return 0;
	}