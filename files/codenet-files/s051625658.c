//
//  main.c
//  ITP1_6_A
//
//  Created by k16031kk on 2018/05/24.
//  Copyright © 2018年 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=n-1; i>=0; i--) {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++) {
        if(i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}

