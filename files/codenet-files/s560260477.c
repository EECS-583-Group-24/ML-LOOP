#include <stdio.h>

int search(char editor[]);

int main(void)
{
	char str[11];
	char editor[11] = "          ";
	int n = 0, i;
	
	scanf("%s", str);
	
	for(i = 0; str[i] != '\0'; i++) {
		if(str[i] != 'B') {
			editor[n] = str[i];
		}
		else if(n - 1 >= 0) {
			editor[n - 1] = ' ';
		}
		n = search(editor);
	}
	printf("%s", editor);
	return 0;
}
int search(char editor[])
{
	int i;
	
	for(i = 0; editor[i] != ' '; i++);
	
	return i;
}