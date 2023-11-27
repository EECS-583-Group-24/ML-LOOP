#include <stdio.h>
int main()
{
    int a, b, ans;
    int a_divisor[1000000000];
    int b_divisor[1000000000];
    int i, j;
    int count_a, count_b;
     
    scanf("%d %d", &a, &b);
 
    count_a = 0;
    for(i = 1; i <= a; i++){
        if(a%i == 0){
            a_divisor[count_a] = a/i;
            count_a = count_a + 1;
        }
    }
    
    count_b = 0;
    for(i = 1; i <= b; i++){
        if(b%i == 0){
            b_divisor[count_b] = b/i;
            count_b = count_b + 1;
        }
    }
     
    ans = 0;
    i = 0;
    do {
        j = 0;
        do {
            if (a_divisor[i] == b_divisor[j]){
                ans = a_divisor[i];
            }
            j += 1;
        } while(ans == 0 && j <= count_b);
        i += 1;
    } while(ans == 0 && i <= count_a);
     
    printf("%d", ans);
     
    return 0;
}