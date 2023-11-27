#include<stdio.h>

int main(void){
	int n,i,a[101],x,y;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	if((n%2)==1){
		for(i=1;i<=(n-1)/2;i++){
			x=a[i];y=a[n-i+1];
			a[i]=y;a[n-i+1]=x;
		}
	}
	else{
		for(i=1;i<=n/2;i++){
			x=a[i];y=a[n-i+1];
			a[i]=y;a[n-i+1]=x;
		}
	}
	for(i=1;i<=n-1;i++){
		printf("%d ",a[i]);
	}
	printf("%d\n",a[n]);
	return 0;
}