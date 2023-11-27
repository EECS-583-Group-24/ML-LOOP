#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int count = 0;
	int i;
	long num;
	char str[20],str1[200][15], str2[200][15];
	char *p;
	
	for(i=0; i<200; i++){
		scanf("%s %s", &str1[i], &str2[i]);
		//gets(str1[i]);
		if( *str1[i]=='\0' || *str1[i]=='\n') break;	
		
		num = atol(str1[i])+atol(str2[i]);
		//ltoa(num, str, 10);
		
		//sprintf(num,"%ld",str1[i]);
		//sprintf(num,"%ld",str2[i]);
		
		//printf("%ld\n", num);
		//printf("str %s\n", str);
		
		count = 0;
		p = str;
		while(*p!='\0'){
			p++;
			count++;
		}
		printf("%d\n",count);
	}

	return 0;
}