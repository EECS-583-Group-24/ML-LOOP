#include <stdio.h>
int main(void) {
    int n,i;
    int a[3];
    scanf("%d",&n);
    a[0]=(n/100);
    a[1]=(n%100)/10;
    a[2]=(n%100)-10*a[1];
    for (i=0;i<3;i++) {
        if (a[i]==1) {
            a[i]=9;
        } else {
            a[i]=1;
        }
    }
    printf("%d\n",a[0]*100+a[1]*10+a[2]*1);
    return 0;
}