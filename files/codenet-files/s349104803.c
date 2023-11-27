#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<inttypes.h>

typedef struct segment_tree_void {
  void *array;
  int32_t size;
  size_t val_size;
  void (*func) (void *, const void *, const void *);
} segment_tree;

static inline void segment_tree_memcpy (void *dst, const void *src, size_t size) {
  uint8_t *p = dst;
  const uint8_t *q = src;
  while (size--) {
    *p++ = *q++;
  }
}

segment_tree* new_segment_tree (const void *ini, const int32_t n, const size_t val_size, void (*func) (void *, const void *, const void *)) {
  int32_t k = 1;
  while (k < n) k *= 2;
  segment_tree *s = (segment_tree *) calloc (1, sizeof (segment_tree));
  s->array = calloc (2 * k, val_size);
  s->size = k;
  s->val_size = val_size;
  s->func = func;
  for (int32_t i = k; i < 2 * k; ++i) {
    segment_tree_memcpy ((uint8_t *)s->array + i * val_size, ini, val_size);
  }
  uint8_t *a = s->array;
  for (int32_t i = k - 1; i > 0; --i) {
    func (a + i * val_size, a + (2 * i) * val_size, a + (2 * i + 1) * val_size);
  }
  return s;
}

void update (segment_tree * const s, int32_t k, const void *val) {
  k += s->size;
  uint8_t * const p = s->array;
  const size_t size = s->val_size;
  segment_tree_memcpy (p + k * size, val, size);
  for (k >>= 1; k > 0; k >>= 1) {
    s->func (p + k * size, p + 2 * k * size, p + (2 * k + 1) * size);
  }
}

void update_tmp (segment_tree * const s, int32_t k, const void *val) {
  k += s->size;
  uint8_t * const p = s->array;
  const size_t size = s->val_size;
  segment_tree_memcpy (p + k * size, val, size);
}

void update_all (segment_tree * const s) {
  uint8_t * const a = s->array;
  const size_t size = s->val_size;
  for (int32_t i = s->size - 1; i > 0; --i) {
    s->func (a + i * size, a + (2 * i) * size, a + (2 * i + 1) * size);
  }
}

void find (const segment_tree *s, int32_t l, int32_t r, void *res) {
  int32_t lindex[64];
  int32_t rindex[32];
  int32_t llen = 0;
  int32_t rlen = 0;
  for (l += s->size, r += s->size; l < r; l >>= 1, r >>= 1) {
    if (l & 1) lindex[llen++] = l++;
    if (r & 1) rindex[rlen++] = --r;
  }
  while (rlen > 0) {
    lindex[llen++] = rindex[--rlen];
  }
  const uint8_t *p = s->array;
  segment_tree_memcpy (res, p + lindex[0] * s->val_size, s->val_size);
  for (int32_t i = 1; i < llen; ++i) {
    s->func (res, res, p + lindex[i] * s->val_size);
  }
}

typedef int32_t i32;

void func_max (void *c, const void *a, const void *b) {
  i32 p = *(i32 *)a;
  i32 q = *(i32 *)b;
  *(i32 *)c = p > q ? p : q;
}

void run (void) {
  i32 n;
  scanf ("%" SCNi32, &n);
  const i32 ini = -1;
  segment_tree *s = new_segment_tree (&ini, n + 2, sizeof (i32), func_max);
  for (i32 i = 1; i <= n; ++i) {
    i32 a;
    scanf ("%" SCNi32, &a);
    update_tmp (s, i, &a);
  }
  update_all (s);
  for (i32 i = 1; i <= n; ++i) {
    i32 x, y;
    find (s, 0, i, &x);
    find (s, i + 1, n + 2, &y);
    i32 z = x > y ? x : y;
    printf ("%" PRIi32 "\n", z);
  }
}

int main (void) {
  run();
  return 0;
}
