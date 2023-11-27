#include<stdio.h>
int main(){
    int n,i,max=0,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(max<a[i]){
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
        if(a[i]==max)
            count++;
    if(count==1){
        int max2=0;
        for(i=0;i<n;i++){
            if(max2<a[i]&&a[i]!=max)
                max2=a[i];
        }
        printf("%d\n",max2);
        for(i=0;i<n;i++){
            if(a[i]==max)
                printf("%d\n",max2);
            else
                printf("%d\n",max);
        }
    }
    else{
        for(i=0;i<n;i++)
            printf("%d\n",max);
    }
    return 0;
}