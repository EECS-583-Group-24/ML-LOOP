#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int N, *A;
    char c;
    int i, j;
    int max, max2;
    
    
    scanf("%d%c", &N, &c);
    
    
    A = (int*)malloc(sizeof(int)*(N+1));
    
    
    max = max2 = 0;
    
    
    for(i=0; i<N; i++)
    {
        scanf("%d%c", &A[i], &c);
        
        
        if(A[i] >= max)
        {
            max2 = max;
            max = A[i];
        }
        else if(A[i] > max2)
        {
            max2 = A[i];
        }
    }
    
    for(i=0; i<N; i++)
    {
        if(A[i] != max)
        {
            printf("%d\n", max);
        }
        else
        {
            printf("%d\n", max2);
        }
    }
    
    
    free(A);
    
    
    //system("pause");
    
    return 0;
}
