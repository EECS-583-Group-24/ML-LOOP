#include <stdio.h>

int digit(int n);

int main(void)
{
    int i,n;
    long sum[200];

    for(i=0;;i++){
        int a,b;
        char c;
        scanf("%d %d%c",&a,&b,&c);

        sum[i]=(long)(a+b);

        if(c==EOF){
            n=i;
            break;
        }
    }

    for(i=0;i<=n;i++){
        printf("%d\n",digit(sum[i]));
    }

    return 0;
}

int digit(int n)
{
    int div10=(int)(n/10);
    int result;

    if(div10==0){
        return 1;
    }
    else{
        result=digit(div10);
        result++;
    }

    return result;
}