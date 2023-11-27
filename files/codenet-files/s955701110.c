#include <stdio.h>

int max2(int len, int *nums) {
    int i, _max = nums[0];
    for (i = 1; i < len; i++) {
        if (nums[i] > _max)
            _max = nums[i];
    }
    return _max;
}

int main(){
    int n, a[200000];
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        int temp = a[i];
        a[i] = 0;
        printf("%d\n", max2(n, a));
        a[i] = temp; 
    }
}