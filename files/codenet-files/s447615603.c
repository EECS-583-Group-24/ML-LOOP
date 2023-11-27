#include<stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int a[n];
    int i=0;
    for(i=0;i<n;i++){
        scanf("%d", &a[n-i-1]);
    }
    for(i=0;i<n;i++){
        if(i==n-1){
            printf("%d\n",a[i]);
            break;
        }
        printf("%d ",a[i]);
    }

    return 0;
}
