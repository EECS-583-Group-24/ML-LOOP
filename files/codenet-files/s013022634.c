#include<stdio.h>
int main(){
	int N;
	scanf("%d",&N);
	int a[200000];
	int i;
	int max1=0;
	int max2=0;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<N;i++){
		
		if(max1<a[i]){
	    max2=max1;
		max1=a[i];
		}
		
			else if(max2<a[i]&&a[i]<max1){
				max2=a[i];
			}
		
	}
	
	
	
	for(i=0;i<N;i++){
		if(a[i]==max1)
			a[i]=max2;
		else
			a[i]=max1;
	}
	
	for(i=0;i<N;i++){
		printf("%d\n",a[i]);
	}
		
	
		return 0;
}