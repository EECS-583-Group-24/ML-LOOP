#include <stdio.h>

int main()
{
    int in, n[3], out;
    int i;


    scanf("%d", &in);
    
    n[0] = in / 100;
    n[1] = in / 10 - n[0]*10;
    n[2] = in - (n[0]*100 + n[1]*10);
//printf("%d\n", in - (n[0]*100 + n[1]*10));

    for(i = 0 ; i < 3 ; i++){
        if(n[i] == 1)
        n[i] = 9;
        else if(n[i] == 9)
        n[i] = 1;
    }

out = n[0] * 100  + n[1]  * 10 + n[2];

    printf("%d", out);
    return 0;

}