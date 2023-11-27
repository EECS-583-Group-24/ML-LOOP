#include <stdio.h>

#define MAX 10

int main(void){
    // Your code here!
    char tmp =0;
    int num1,num2,answer =0;
    
    while( (tmp = getchar()) != ' ' )
    {
        num1 = (num1 * 10) + (tmp - '0');
    };
    
    while( (tmp = getchar()) != '\n' )
    {
        num2 = (num2 * 10) + (tmp - '0');
    };
    
    
    while(answer == 0){
        if(num2==num1)
        {
            answer = num1;
        }
        else if (num2>num1)
        {
            num2=num2%num1;
            if(num2==0)
            {
                answer = num1;
            }
        }
        else
        {
            num1=num1%num2;
            if(num1==0)
            {
                answer = num2;
            }
        }
    }
    printf("%d",answer);
    
    return 0;
}

