#include <stdio.h>

int main(){
	int k;
	for(k=1;k<=3;k++){
	
	int j,i;
	scanf("%d %d",&j,&i);
	j=i+j;
	for(i=1;j>1;){
		j=j/10;
//		printf("i=%d j=%d\n",i,j);
		i=i+1;
	}
	
	printf("%d\n",i);
		}
		return 0;
}