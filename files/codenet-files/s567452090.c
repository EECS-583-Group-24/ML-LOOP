#include <stdio.h>

int main(){
    int i,data[6], sum[3], t[3]={0,0,0};
    for (i=0; i<6; i+=2) {
        scanf("%d %d",&data[i],&data[i+1]);
        sum[i/2]=data[i]+data[i+1];
    }
    for (i=0; i<3; i++) {
        while (sum[i]>0) {
            sum[i] /=10;
            t[i]++;
        }
    }
    for (i=0; i<3; i++) {
        printf("%d\n",t[i]);
    }
    
    return 0;
}