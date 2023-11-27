#include <stdio.h>
int main(){
	char *n;
	char ans[5];
	int i;
	scanf("%s",n);	
	for(i=0;i<3;i++){
		if(n[i]=='1'){
			ans[i]='9';
		}else{
			ans[i]='1';
		}
	}
	ans[3]='\0';
	printf("%s",ans);
	return 0;
}	