#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned long long int uint64;
typedef long long int          int64;

#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))

#define SIZE (200000)


void get_N (int64 *n)
{
  int cnt;
  
  cnt = scanf("%lld", n);

  return;
}

typedef struct _tmp_t {
  int64    a;
  int64    b;
} tmp_t;

tmp_t A[SIZE];
tmp_t B[SIZE];

int compare_a(const void *a, const void *b)
{
  tmp_t *x;
  tmp_t *y;

  x = (tmp_t *)a;
  y = (tmp_t *)b;

  if (x->a > y->a) return -1;
  if (x->a < y->a) return 1;

  return 0;
}

int compare_b(const void *a, const void *b)
{
  tmp_t *x;
  tmp_t *y;

  x = (tmp_t *)a;
  y = (tmp_t *)b;

  if (x->b > y->b) return 1;
  if (x->b < y->b) return -1;

  return 0;
}

void qsort_a (tmp_t *array, int size)
{
  qsort(array, size, sizeof(tmp_t), compare_a);
}

void qsort_b (tmp_t *array, int size)
{
  qsort(array, size, sizeof(tmp_t), compare_b);
}

int main()
{
  int cnt;
  int i;
  int64 N;

  get_N(&N);

  for(i=0; i<N; i++) {
    cnt = scanf("%lld", &A[i].a);
    B[i].a = A[i].a;
  }

  qsort_a (B, N);

  for(i=0; i<N; i++) {
//    printf("A=%d B=%d\n", A[i].a, B[i].a);
    if (A[i].a == B[0].a) {
      printf("%d\n", B[1].a);
    }else{
      printf("%d\n", B[0].a);
    }
  }
  
  return 0;
}

