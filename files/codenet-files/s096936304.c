#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 100

int main(void){
	int i, sequence_num;
	int *sequence, *reverse;
	
	scanf("%d", &sequence_num);
	sequence = (int *)malloc(sequence_num);
	reverse = (int *)malloc(sequence_num);
	
	if(sequence_num > MAX_NUM){
		puts("Array Number is Over.");
		return 0;
	}
	
	for(i = 0; i < sequence_num; i++){
		scanf("%d", &sequence[i]);
		reverse[sequence_num - (i + 1)] = sequence[i];
	}
	
	for(i = 0; i < sequence_num; i++){
		printf("%d", reverse[i]);
		if(i != (sequence_num - 1)){
			putchar(' ');
		}
	}
	putchar('\n');
	free(sequence);
	free(reverse);
	
	return 0;
}