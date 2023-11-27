#include<stdio.h>
#include<string.h>
int main(void)
{
	int len,i,cnt;
	char s[11],ss[11];
	scanf("%s",s);
	len=strlen(s);
	cnt=0;
	for(i=0;i<len;i++){
		if(s[i]!='B'){
			ss[cnt]=s[i];
			cnt++;
		}
		else if(cnt>0){
			cnt--;
		}
	}
	ss[cnt]='\0';
	printf("%s\n",ss);
	return 0;
}