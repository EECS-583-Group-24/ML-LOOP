#include <stdio.h>
int main (void){
int n,a[100],i;
scanf("%d",&n);
for(i=1;i<=n;i++){
	scanf("%d",&a[i]);
	}
for(i=n;i>=1;i=i-1){
	printf("%d ", a[i]);

	}


return 0;	
}