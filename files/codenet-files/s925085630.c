#include<stdio.h>

int main(){
    int n,a[3];
    scanf("%d",&n);
    a[0]=n/100;
    a[1]=(n-100*a[0])/10;
    a[2]=(n-100*a[0]-10*a[1]);
    
    for(int i = 0; i <3; i++)
    {
    if (a[i]==9) {a[i]=1;
    }else{
        
        if (a[i]==1) {
            a[i]=9;
        }
        
    }
    
    }
    printf("%d",100*a[0]+10*a[1]+a[2]);
    return 0;
}