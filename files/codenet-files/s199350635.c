#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
#define ll long long

int main(void)
{
    int arr[101],a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
        scanf("%d",arr+i);
    for(i=a-1;i>=0;i--)
        printf("%d%c",*(arr+i),(i>0)?' ':'\n');
    return 0;
}


