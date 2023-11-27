#include<stdio.h>
int main()
{
    int n,i,x[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(j=n-1;j>=0;j--){
            if(j!=0)
       printf("%d ",x[j]);
    else if(j==0)
        printf("%d\n",x[j]);
    }
    return 0;
}

