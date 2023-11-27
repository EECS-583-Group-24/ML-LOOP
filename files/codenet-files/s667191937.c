#include <stdio.h>
int main(){
	int x,y,d,tmp;
	
	scanf("%d %d",&x,&y);
	
	if(x<y){
	    tmp=x;
	    x=y;
	    y=tmp;
	}
	
	while(y>0){
		d=x%y;
		x=y;
		y=d;
	}
	
	printf("%d\n",y);
	
	return 0;
}
