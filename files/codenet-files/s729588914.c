#include <stdio.h>

int main()
{
  int i, n;
  scanf("%d", &n);

  int input_a[n];
  for( i = 0 ; i < n ; i++ )
    scanf("%d", &input_a[i]);

  for( i = n - 1 ; i > 0 ; i-- )
    printf("%d ", input_a[i]);
  printf("%d\n", input_a[0]);
}

