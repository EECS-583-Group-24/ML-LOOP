#include<stdio.h>

int a[100000000];

int main(){
    int n;

    printf("%d",a[756]);
    int i,tmp=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=n-1;i!=0;i--)
    printf("%d ",a[i]);
    printf("%d\n",a[n-1]);



    return 0;
}
