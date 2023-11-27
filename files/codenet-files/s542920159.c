#include <stdio.h>

int main(void) {
	int n[3];
	scanf("%d",&n);
	int i;
	for(i=0;i<3;i++)
	{
		if(n[i]==9) n[i]=1;
		else n[i]=9;
	}
	printf("%d",n);
	// your code goes here
	return 0;
}
