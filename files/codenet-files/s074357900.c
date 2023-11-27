#include <stdio.h>
#include <string.h>

int main() {
    char s[10+1];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == 'B') {
            int j = i-1;
            while (j >= 0 && s[j] == 'X') {
                j -= 1;
            }
            if (j >= 0) {
                s[j] = 'X';
            }
            s[i] = 'X';
        }
    }

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != 'X') {
            printf("%c", s[i]);
        }
    }
    puts("");

    return 0;
}