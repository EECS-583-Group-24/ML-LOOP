#include<stdio.h>

int a[100];

int main(void){
    int i,n;

    scanf("%d",&n);

    for(i = 0;i < n;i++)
        scanf("%d",&a[i]);

    for(i = n - 1;i >= 0;i--){
        printf("%d",a[i]);
        if(i > 0)
            printf(" ");
    }
    printf("\n");
    return 0;
}