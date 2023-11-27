#include <stdio.h>

void sort1(int data[], int n){
    int i, j, x, y;
    for(i = 1; i < n; i++){
        x = data[i];
        for(j = i - 1; j >= 0; j--){
            y = data[j];
            if(y > x)
                data[j+1] = y;
            else {
                data[j+1] = x;
                break;
            }
            
            
        }
        if(j == -1) data[0] = x;
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    sort1(b, n);
    for(int i = 0; i < n; i++) {
        int max = 0;
        for(int j = 0; j < n; j++) {
            if(j == i) continue;
            if(max <= a[j]) {
                max = a[j];
                if(max == b[n-1]) break;
            }
        }
        printf("%d\n", max);
    }
    return 0;
}
