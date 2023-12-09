#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "B00B110101B";
    char t[11] = { 0 };
    int p = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '0') {
            t[p] = '0';
            p++;
        } else if (s[i] == '1') {
            t[p] = '1';
            p++;
        } else if (s[i] == 'B') {
            if (p > 0) {
                p--;
            }
        }
    }

    printf("%s\n", t);
    return 0;
}
