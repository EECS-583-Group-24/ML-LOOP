#include <stdio.h>
#include <stdlib.h>
#define N 100000
int cmp(const void *a,const void *b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int a[11],b[10];
    char s[11];
    int i,k=0,m=0;
    gets(s);
    for (i=0; s[i]; i++)
    {
        if (s[i]=='0')
            a[i]=1;
        if (s[i]=='1')
            a[i]=2;
        if (s[i]=='B')
            a[i]=3;
        k++;
    }
    for (i=0; i<k; i++)
    {
        if (a[i]==3)
        {
            a[i]=0;
            a[i-1]=0;
        }
    }
    for (i=0; i<k; i++)
    {
        if (a[i]==1)
        {
            b[m]=0;
            m++;
        }
        if (a[i]==2)
        {
            b[m]=1;
            m++;
        }
    }
    qsort(b,m,sizeof(int),cmp);
    for (i=0; i<m; i++)
    {
        printf("%d",b[i]);
    }

}
