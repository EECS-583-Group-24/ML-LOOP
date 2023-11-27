#include<stdio.h>
int main(){
    int a[200],b[200];
    int c[200],i,j,n;
    while(scanf("%d%d",&a[i],&b[i])!=EOF){
        i++;
        c[i]=a[i]+b[i];
    }
    n=i;
    for(j=0;j<n;j++){
        for(i=0;c[j]!=0;i++){
            c[j]=c[j]/10;
        }
        printf("%d\n",i);
    }
    return 0;
}

