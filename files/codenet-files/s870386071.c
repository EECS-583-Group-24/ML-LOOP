#include<stdio.h>

int main(){
    
    int cnt,a,b[1000];
    
    scanf("%d",&a);
    for(cnt=0;cnt<a;cnt++){
        scanf("%d",&b[cnt]);
    }
    
    for(cnt=0;cnt<a;cnt++){
        printf("%d ",b[a-cnt-1]);
    }
    //printf("\n");
    return 0;
    
}
