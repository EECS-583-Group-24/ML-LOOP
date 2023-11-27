#include <stdio.h>

int main(){
    int i, n;
    int arr[100];
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        if(i)printf("　");
        printf("%d", arr[n-i-1]);
    }
    printf("\n");

    return 0;
}

