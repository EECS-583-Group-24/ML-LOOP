#include<stdio.h>
#define SIZE 500

typedef struct zip{
    int num;
    int a;
}zip_t[SIZE];

void bubble_sort(zip_t set[],int N){
	zip_t swap;
	int i,j;
	for(j = 0;j < N-1;j++){
		for(i = 0;i < N-j-1;i++){
			if(set[i]->a > set[i+1]->a){
				*swap = *set[i + 1];
				*set[i + 1] = *set[i];
				*set[i] = *swap;
			}
		}
	}
}

int main(void){
    int N,i;
    zip_t set[SIZE];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&set[i]->a);
        set[i]->num = i;
    }
    bubble_sort(set,N);
    for(i=0;i<N;i++){
        if(set[N-1]->num != i){
            printf("%d\n",set[N-1]->a);
        }else{
            printf("%d\n",set[N-2]->a);
        }
    }
    return 0;
}