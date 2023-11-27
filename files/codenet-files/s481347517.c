#include <stdio.h>

int main(void)
{
        int n,i,j,fst,sec;

        scanf("%d",&n);

        int a[n];

        for(i=0;i<n;i++)
                scanf("%d",&a[i]);

        for(i=0;i<n;i++){
                fst=a[i];sec=a[i];
                for(j=0;j<n;j++){
                        if(a[j]>fst) fst=a[j];
                        else if(a[j]>sec) sec=a[j];
                }
        }
        for(i=0;i<n;i++){
                if(fst!=a[i]) printf("%d\n",fst);
                else printf("%d\n",sec);
        }
        return 0;
}
