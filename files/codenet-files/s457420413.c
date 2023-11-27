#include<stdio.h>

int main(){
	char a[4];
	scanf("%s",a);
	int i;
	for(i=0;i<3;i++){
		if(a[i]=='1'){
			printf("9");
		}
		else if(a[i]=='9'){
			printf("1");
		}
		else printf("%c",a[i]);
	}
	return 0;
}