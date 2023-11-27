#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d%d",&x,&y);
    while((z=x%y)!=0){
        x=y;
        y=z;
    }
    printf("%d",y);
    return 0;
}
