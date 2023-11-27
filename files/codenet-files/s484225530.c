#include<stdio.h>
int a[200000];

int max(int n, int j){
    int tmp;
    int i;

    if(j != 0){
        tmp = a[0];
    }
    else{
        tmp = 0;
    }

    for(i = 1; i < n; i++){
        if(i != j){
            tmp = (tmp < a[i]) ? a[i] : tmp;
        }
    }

    printf("%d\n", tmp);

    j++;

    if(j < n){
        return max(n, j);
    }

    return 0;
}

int main(){
    int n;

    scanf("%d", &n);

    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int j = 0;
    max(n, j);

    return 0;
}