#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

#define TLong long long 

// abs(n)
int abs(int n){
	if(n < 0)	n *= -1;
	return n;
}

// gcd(a,b)
int gcd(int a,int b){
	int ret;
	ret = (b == 0) ? a : gcd(b, a % b);
}

// lcm(a.b)
int lcm(int a,int b){
	return (a * b) / gcd(a,b);
}

// qsort(array, size, sizeof(int),comp);
int comp(const int *a,const int *b){
	return (*a - *b);
}

// append(array,*size,addNum)
void append(int *array,int *size,int num){
	realloc(array, sizeof(int) * (*size + 1));
	array[(*size)] = num;
	++(*size);
}

// pop(array,*size) & nongetpop(array,*size)
int pop(int *array,int *size){
	int temp = array[(*size - 1)];
	realloc(array,sizeof(int) * (*size - 1));
	--(*size);
	return temp;
}

int main(void){
	char instr[11],outstr[11] = "";
	scanf("%s",instr);
	for(int i = 0; i < strlen(instr); ++i){
		if(instr[i] == 'B') outstr[strlen(outstr) - 1] = '\0';
		else outstr[strlen(outstr)] = instr[i];
	}
	printf("%s",outstr);
	return 0;
}
