#include <stdio.h>

int main()
{
                int n;
                scanf("%d", &n);

                int num[n];
                for (int i = 0; i < n; i++) {
                        scanf("%d", &num[i]);
                }

                for (int i = n - 1; 0 < i; i--) {
                        printf("%d", num[i]);
                        if (i != 1) {
                                printf(" ");
                        }
                }
                printf("\n");
}
