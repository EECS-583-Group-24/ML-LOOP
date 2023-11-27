#include <stdio.h>
int main(void){
	int x,y,atai,keta;//??\?????????
	while(scanf("%d %d",&x,&y)!=EOF){
		keta=0;
		atai=x+y;
		while(atai!=0){
			atai=atai/10;
			keta++;
		}
		printf("%d\n",keta);
	}
	return 0;
}