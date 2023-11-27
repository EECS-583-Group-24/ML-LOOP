#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
    int n,i,b;
    int *a;
    
    scanf("%d",&n);
    
    if(n<0||100<n){
        printf("error\n");
        return 0;
    }
    
    a=(int*)calloc(n,sizeof(int));
    
    for(i=0;i<n;i++){
        scanf("%d",&b);
        if(b<0||1000<=b){
            printf("error\n");
            return 0;
        }
        a[i]=b;
    }
    printf("%d",a[n-1]);
    for(i=n-2;i>=0;i--){
        printf(" %d",a[i]);
    }
    putchar('\n');
    return 0;
}
