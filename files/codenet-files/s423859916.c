#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef int32_t i32;

#define ALLOC(size,type) ((type*)calloc((size),sizeof(type)))
#define SORT(a,num,cmp) qsort((a),(num),sizeof(*(a)),cmp)

int cmp_int (const void *a, const void *b) {
  i32 d = *(i32 *)a - *(i32 *)b;
  return d == 0 ? 0 : d < 0 ? -1 : 1;
}

void run (void) {
  i32 n;
  scanf ("%" SCNi32, &n);
  i32 *a = ALLOC (n, i32);
  i32 *b = ALLOC (n, i32);
  for (i32 i = 0; i < n; ++i) {
    scanf ("%" SCNi32, a + i);
    b[i] = a[i];
  }
  SORT (b, n, cmp_int);
  for (i32 i = 0; i < n; ++i) {
    if (a[i] == b[n - 1]) {
      printf ("%" PRIi32 "\n", b[n - 2]);
    } else {
      printf ("%" PRIi32 "\n", b[n - 1]);
    }
  }
}

int main (void) {
  run();
  return 0;
}
