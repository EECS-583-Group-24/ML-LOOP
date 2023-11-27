#include<stdio.h>
int a[200000];
int b[200000];

void sort(int n){
    int i;

    for(i = 0; i < n; i++){
        int j;
        for(j = n - 2; j >=  i; j--){
            if(b[j] > b[j + 1]){
                int tmp;
                tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }
}

void ary_cpy(int n){
    int i;

    for(i = 0; i < n; i++){
        b[i] = a[i];
    }
}

int max(int n, int j){

    ary_cpy(n);

    b[j] = 0;

    sort(n);

    printf("%d\n", b[n - 1]);

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