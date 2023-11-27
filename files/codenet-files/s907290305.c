#include <stdio.h>

int main(void)
{
	int ans[3];
	int s;
	scanf("%d",&s);
	
	ans[0]=s/100;
	ans[1]=s/10;
	ans[2]=s%10;
	
	
	if(ans[0]=1){
		ans[0]=9;
		}else{
			ans[0]=1;
			}
			
	if(ans[1]=1){
		ans[1]=9;
	}else{
		ans[1]=1;
	}
	
	if(ans[2]=1){
		ans[2]=9;
	}else{
		ans[2]=1;
		
	}
	
	printf("%d",ans[0]*100+ans[1]*10+ans[2]);

	return 0;
}