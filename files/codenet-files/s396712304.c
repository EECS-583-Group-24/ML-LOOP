#include<stdio.h>
int main()
{
    int n[200000],N,i,j,max;
    while(scanf("%d",&N)!=EOF)
    {
        for(i=0; i<N; i++)
            scanf("%d",&n[i]);
        for(i=0; i<N; i++)
        {
            max=n[0];
            for(j=0; j<N; j++)
            {
                if(i==j)
                    continue;
                if(max<n[j])
                    max=n[j];
            }
            printf("%d\n",max);
        }
    }
    return 0;
}
