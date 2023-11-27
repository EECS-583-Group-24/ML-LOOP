#include <stdio.h>
int main(){
    int a[100], max=0, b=0, c=0;
    scanf("%d",&max);
    for(b = 0; b<max; b++){
        scanf("%d",&a[b]);
     
    }
    for(c = max-1; c>0;c--){
        printf("%d ",a[c]);
    }
    printf("%d",a[0]);
    printf("\n");
     
 
 
    return 0;
}