#include <stdio.h>

struct dataset{
	int a, b;
	int num_digits;
};

int main(){
	dataset data[200];
	int i, j, sum;

	i = 0;
	do{
		if(scanf("%d %d", &data[i].a, &data[i].b) == EOF) break;
		else i += 1;

		sum = data[i-1].a + data[i-1].b;
		data[i-1].num_digits = 0;
		do{
			data[i-1].num_digits += 1;
			sum /= 10;
		}while(sum != 0);
	}while(i < 200);

	for(j = 0; j < i; j++) printf("%d\n", data[j].num_digits);

	return 0;
}