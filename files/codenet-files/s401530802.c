#include<stdio.h>
#include<string.h>

int main() {
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF){
    char s[255];
    scanf("%d %d", &a, &b);
    int c = a + b;
    sprintf(s, "%d", c);
    int length = strlen(s);
    printf("%d\n", length);
  }
  return 0;
}