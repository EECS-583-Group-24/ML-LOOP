#include<stdio.h>

int main(){
	int num[2], n;
	int i, j = 0;
	for(i=0;i<3;i++){
		scanf("%d %d",&num[0],&num[1]);
		n = num[0] + num[1];
		while(n>0){
			n = n/10;
			j++;
		}
		printf("%d\n",j);
	}
	return 0;
}