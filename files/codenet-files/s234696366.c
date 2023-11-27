#include <stdio.h>

int main(int argc, char **argv){
	int i;
	int len,data[100];

	// Input
	scanf("%d",&len);
	for(i=0;i<len;i++){
		scanf("%d",data+i);
	}
	// Output
	for(i=len-1;i>=0;i--){
		if( i==0){
			printf("%d\n",data[i]);
		} else {
			printf("%d ",data[i]);
		}
	}
	
	return 0;
}