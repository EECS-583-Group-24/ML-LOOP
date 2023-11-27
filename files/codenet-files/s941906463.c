#include<stdio.h>

int main(){
    int n,a[100000],b[100000],k,l,i,j,z,count[2];
    scanf("%d",&n);
    for( i=0;i<n;i++){
        if(i%2==0){
            scanf("%d",&a[i/2]);
        }else{
            scanf("%d",&b[i/2]);
    };
    }

    count[0]=0;
    count[1]=0;
for(i=0;i<n/2;i++){
    k=1;
    for(j=0;j<n/2;j++){
        if(a[i]==a[j]){
            k++;
        }
                    if(count[0]<k-1){
                count[0]=k-1;
                l=a[i];
            }
    }
    }

for(i=0;i<n/2;i++){
    k=1;
    for(j=0;j<n/2;j++){
        if(b[i]==b[j]){
            k++;
        }
                    if(count[1]<k-1){
                count[1]=k-1;
                z=b[i];
            }
    }
    }
    if(z!=l){
    printf("%d",n-count[1]-count[0]);
    }else{
        if(count[0]<count[1]){
                printf("%d",n-count[1]);
        }else{
                printf("%d",n-count[0]);
        }
    }
    return 0;
}