#include <stdio.h>

int main(int argc, char argv[])
{
  unsigned int a = 0, b = 0;

  while(!feof(stdin) && !ferror(stdin)) {

    unsigned tmp = 0;
    unsigned cnt = 0;

    scanf("%d %d", &a, &b);
    tmp = a + b;

    while((tmp /= 10) >= 0) {
      cnt++;
      if(tmp == 0) {
        printf("%d %d %d\n", a, b, cnt);
        cnt = 0;
        break;
      }
    }
    scanf("%*[^\n] %*[^\n]");
    scanf("%*a %*b");
  }

  return 0;
}