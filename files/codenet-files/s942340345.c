include <stdio.h>

int main(void){
  long int W, H, X, Y;
  scanf("%ld %ld %ld %ld", &W, &H, &X, &Y);
  printf("%lf %d\n", double(W)*double(H)/2, 2*X==W && 2*Y==H);
  return 0;
}