#include <stdio.h>

int main()
{
  int ret, i;
  int N, A[200000];
  int max, max2;

  ret = scanf("%d", &N);
  for ( i=0; i<N; i++ )
    ret = scanf("%d", &(A[i]));
  if ( A[0] < A[1] ) {
    max = A[1];
    max2 = A[0];
  }
  else {
    max = A[0];
    max2 = A[1];
  }
  for ( i=2; i<N; i++ ) {
    if ( max < A[i] ) {
      max = A[i];
    }
    else if ( max2 < A[i] ) {
      max2 = A[i];
    }
  }
  for ( i=0; i<N; i++ ) {
    if ( A[i] == max )
      printf("%d\n", max2);
    else
      printf("%d\n", max);
  }
  return 0;
}