/*
 * exception_handling.c
 *
 *  Created on: 2019/11/01
 *      Author: 113200
 */

#include "stdio.h"
#include "stdlib.h"
#define MAX_LENGTH (200*1000)

int main(void){

	int length,index_first;
	int first = 0;
	int second = 0;
	int* array;
	array = (int*)calloc(sizeof(int),MAX_LENGTH);

	scanf("%d",&length);

	for (int i = 0; i < length; i++){
		scanf("%d",&array[i]);
		if (first < array[i]){
			first = array[i];
			index_first = i;
		}
	}

	for (int i = 0; i < length; i++){
		if (i == index_first){
			continue;
		}
		if (second < array[i]){
			second = array[i];
		}
	}

	for (int i = 0; i < length; i++){
		if (array[i] == first){
			printf("%d\n",second);
		}
		else{
			printf("%d\n",first);
		}
	}
}





