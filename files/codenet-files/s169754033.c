/*
 Algorithms and Data Structures 1
 Insertion Sort
 Name: Ryuya Asada
 ID: s1260064
*/


#include <stdio.h>


int gcd(int, int);


int main(int argc, char* argv[]) {
    int a=0;
    int b=0;

    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    return 0;
}


int gcd(int a, int b) {
    if(b == 0)
        return a;

    return gcd(b, a%b);
}
