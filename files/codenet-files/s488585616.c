#include <stdio.h>
int main(void){
    int a,b,i;
    scanf("%d %d",&a,&b);
    int c=a + b;
    for(i=1;c<10;i++){
        c = c/10;
    }
    printf("%d\n",i);
    return 0;
}

