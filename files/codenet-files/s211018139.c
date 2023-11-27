#include <stdio.h>

int main(void)
{
    int i;
    int num, num1, num2;
    int digits;
    
    while (scanf("%d%d", &num1, &num2) != EOF){
        num = num1 + num2;
        digits = 0;
        while (num != 0){
            num /= 10;
            digits++;
        }
        printf("%d\n", digits);
    }
    
    return (0);
}