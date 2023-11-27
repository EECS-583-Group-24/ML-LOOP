#include<stdio.h>
int main (void){
    int a,b,ans,i,j,keta;
    while(scanf("%d %d",&a,&b)!=EOF){
        ans=a+b;
        keta=0,j=1;
        for(;;){
            keta++;
            j=j*10;
            if(ans%j==ans)break;
        }
        printf("%d\n",keta);
    }
return 0;
}