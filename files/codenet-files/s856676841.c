#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10000

void rec(char *str)
{
    int temp;
    char *tok;

    tok = strtok(NULL, " ");
    if(tok == NULL) return;
    temp = atoi(tok);
    rec(str);
    printf("%d ", temp);
    return;
}

void first_rec(char *str)
{
    int temp;

    temp = atoi(strtok(str, " "));
    rec(str);
    printf("%d\n", temp);
    return;
}

int main(void)
{
    int n;
    char *str;

    scanf("%d%*c", &n);
    fgets(str, MAX, stdin);

    first_rec(str);

    return 0;
}