#include <stdio.h>
// max1 >= max2
int main(int argc, char * argv[]) {
    int n, max1, max2, pos1, pos2;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &a[0]);
    scanf("%d", &a[1]);
    if(a[0] >= a[1]){
        max1 = a[0];
        pos1 = 0;
        max2 = a[1];
        pos2 = 1;
    }else{
        max1 = a[1];
        pos1 = 1;
        max2 = a[0];
        pos2 = 0;
    }
    for(int i = 2;i < n;i++){
        scanf("%d", &a[i]);
        if(max1 < a[i]){
            max1 = a[i];
            pos1 = i;
        }else if(max2 < a[i]){
            max2 = a[i];
            pos2 = i;
        }
    }
    for(int i = 0;i < n;i++){
        if(pos1 != i){
            printf("%d\n", max1);
        }else{
            printf("%d\n", max2);
        }
    }
    return 0;
}