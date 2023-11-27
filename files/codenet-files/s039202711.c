#include<stdio.h>
#include<string.h>
char x_x,s[15],ans[15];
int len,len_a;
int main(){
	scanf("%s",s);
	len=strlen(s);

	for(int i=0;i<len;i++){
		x_x=s[i];

		if(x_x=='B'&&len_a>0){
			ans[len_a]='\0';
			len_a--;
		}
		else{
			ans[len_a]=x_x;
			len_a++;
		}
	
	}

	printf("%s",ans);
}
