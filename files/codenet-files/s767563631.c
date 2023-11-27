#include <stdio.h>

int main(void){
    int N, A[200005], i, M1, M2, I;
    scanf("%d", &N);
    scanf("%d", &A[1]); scanf("%d", &A[2]);
    if (A[1]>A[2]) {
        M1=A[1]; M2=A[2];
        I=1;
    }
    else {
        M1=A[2]; M2=A[1];
        I=2;
    }
    for (i=3; i<=N; i++) {
        scanf("%d", &A[i]);
        if (A[i]>M1) {
            M2=M1;
            M1=A[i];
            I=i;
        }
        else if (A[i]>M2) {
            M2=A[i];
        }
    }
    if (M1==M2) {
        for (i=1; i<=N; i++) printf("%d\n", M1);
    }
    else {
        for (i=1; i<=N; i++) {
           if (i==I) printf("%d\n", M2);
           else printf("%d\n", M1);
        }
    }
    return 0;
}
