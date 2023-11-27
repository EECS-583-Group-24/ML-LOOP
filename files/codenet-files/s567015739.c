#include<stdio.h>

int main(){
	int num[2], n;
	int i, j;
	for(i=0;i<200;i++){
		if(scanf("%d %d",&num[0],&num[1])==EOF){
			break;
		}
		j = 0;
		n = num[0] + num[1];
		while(n>0){
			n = n/10;
			j++;
		}
		printf("%d\n",j);
	}
	return 0;
}