#include <stdio.h>

main()
{
	int n,a[100],count;
	
	scanf("%d",&n);
	
	for(count=0;count<n;count++){
		scanf("%d",&a[count]);
	}
	for(count=n-1;count>=0;count--){
		printf("%d",a[count]);
		if(count!=0) printf(" ");
	}
	printf("\n");
	
	return 0;
}