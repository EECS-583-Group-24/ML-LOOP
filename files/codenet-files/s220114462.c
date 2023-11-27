#include <stdio.h>
int main(){
	int a,b[100],n,i;

	scanf("%d",&a);
	for(i=0;i<a;i++)
		scanf("%d",&b[i]);
	for(i=a-1;i>=0;i--){
		printf("%d",b[i]);
		if(i!=0)
			printf(" ");
	}
	printf("\n");
	return 0;
}