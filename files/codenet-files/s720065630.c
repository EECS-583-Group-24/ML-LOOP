#include<stdio.h>
int main(){
    int n,a[1000];
    int i,tmp=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        for(i=0;i<n/2;i++){
                tmp=a[n-1-i];
                a[n-1-i]=a[i];
                a[i]=tmp;
            }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
            printf('\n');


    return 0;
}
