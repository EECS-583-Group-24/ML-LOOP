#include <stdio.h>
#include <stdlib.h>

int ord(const void* a, const void *b){
    int x = *((int*)a), y = *((int*)b); 
    
    if (x > y)
        return 1;
    if (x < y)
        return -1;
    return 0;

}

int main() {
    int n;
    scanf("%d", &n);
    int vec[n], crt[n];
    for (int h = 0; h< n; ++h){
        scanf("%d", &vec[h]);
        crt[h] = vec[h];
    }
    
    qsort (crt, n, sizeof(crt[0]), ord);
    
    int max = crt[n-1], maxb = crt[n-2];
    
    for  (int i = 0; i < n; ++i){
        if (vec[i] == max)
            printf("%d\n", maxb);
        else
            printf("%d\n", max);
    }
    
    
    return 0;
}
