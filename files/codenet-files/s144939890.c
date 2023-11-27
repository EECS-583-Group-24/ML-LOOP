#include <stdio.h>

int main(){
    int a,b,c,d,i;
    int count;
    int max_data = 200;
    
    for(i=1;i<=max_data;i++){
        a=-1;
        b=-1;
        count=0;
        scanf("%d %d",&a,&b);
        
        if(a<0||b<0){
            break;
        }
        c=a+b;
        d=(int)log10((double)c) + 1;
        printf("%d\n",d);
    }
    return 0;
}