#include <stdio.h>
int main(void)
{
    int a,b,add,cnt;
    
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        add=a+b;
        cnt=0;
        while(1)
        {
            cnt++;
            if(add/10==0) break;
            else add/=10;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

