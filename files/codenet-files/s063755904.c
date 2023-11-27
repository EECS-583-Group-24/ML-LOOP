#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]){
    
    int num;
    int *array;
    int x;
    
    scanf("%d", &num);
    
    array = malloc(sizeof(int)*num);
    
    for(x=num; 0<x;x--){
        scanf("%d", &array[x-1]);
    }
    
    for(x=0; num-2>x; x++){
        printf("%d ", array[x]);
    }
    
    printf("%d", array[x]);
    free(array);
    return 0;
}