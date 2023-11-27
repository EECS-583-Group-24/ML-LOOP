#include <stdio.h>
int main(void) {
  int a, b, mas, count = 0;
  while(scanf("%d",&a) != EOF) {
  	count = 0;
    scanf("%d",&b); 
    mas = a + b;
    while(mas != 0) {
      mas = mas / 10;
      count++;
    }
    printf("%d\n",count);
  }
  return(0);
}