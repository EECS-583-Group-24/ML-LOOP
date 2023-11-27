#include <stdio.h>
int main(void){
	int n=0,a[100]={0},i=0,z=0;
	scanf("%d\n",&n);
	while(1){
		if(i>=n)break;
	scanf("%d",&a[i]);
	i++;
	}
	i=0;
	while(1){
		if(i>(n/2)-1)break;
		z=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=z;
		z=0;
		i++;
	}
	i=0;
	printf("\n");
	while(1){
		if(i>=n){
		printf("\n");
		break;}
		printf("%d",a[i]);
		printf(" ");
		i++;
	}
	return 0;
}