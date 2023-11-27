#include <stdio.h>

int main(void) {
	int n,max,i,m,j;
	max=0;
	m=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d\n",&a[i]);
		if(a[i]>max){
			if(a[i]>m){
				max=m;
				m=a[i];
			}else{
				max=a[i];
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==max){
			printf("%d\n",max);
		}else{
			printf("%d\n",m);
		}
	}
	// your code goes here
	return 0;
}


