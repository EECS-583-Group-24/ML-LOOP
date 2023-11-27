#include <stdio.h>

int main(void){
    int n,m[3],i;

    scanf("%d",&n);

    m[0]=n/100;
    m[1]=n%100/10;
    m[2]=n%10;
    
    
    for(i=0; i<3; i++){
        if(m[i]==1)
            m[i]=9;
        else if(m[i]==9)
            m[i]=1;
    }

    printf("%d\n",m[0]*100+m[1]*10+m[2]);
}
