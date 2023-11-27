#include <stdio.h>

int main()
{
    int i,no;
    int v[3];

    scanf("%d",&no);

    for (i = 0; i < 3; i++){
        v[2 - i] = no % 10;
        no /= 10; 
    }

    for (i = 0; i < 3; i++){
        printf("%d",(v[i] == 1) ? 9:1);
    }
    printf("\n");

    return 0;
}