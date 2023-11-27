#include <stdio.h>

int main(void)
{
	char s[10];
	char ans[10];
	int i, j;
	j = 0;


	scanf("%s", s);

	for(i=0; i<10; i++){
		if(s[i] == '0' || s[i] == '1' ){
			ans[j] = s[i];
			ans[j+1] = '\0';
			j++;
		}else if(s[i] == 'B'){
			if(j!=0){
				ans[--j] = '\0';
			}
		}
	}

	printf("%s\n", ans);

	return 0;
}
