// Ver19.03
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define INF (1 << 29) * 2
#define LLINF 4545454545454545454
#define MOD 1000000007
#define ll long long
#define ull unsigned long long
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int upll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? -1 : *(ll *)a > *(ll *)b ? 1 : 0; }
int downll(const void *a, const void *b) { return *(ll *)a < *(ll *)b ? 1 : *(ll *)a > *(ll *)b ? -1 : 0; }
void sortup(ll *a, int n) { qsort(a, n, sizeof(ll), upll); }
void sortdown(ll *a, int n) { qsort(a, n, sizeof(ll), downll); }

typedef struct
{
  int val;
  int ind;
} hoge;

int ssort(const void *a, const void *b)
{
  int p = (*(hoge *)a).val, q = (*(hoge *)b).val;
  return p <= q ? 1 : -1;
}

int main()
{
  int n;
  hoge a[200005];
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    a[i].ind = i;
    scanf("%d", &a[i].val);
  }
  qsort(a, n, sizeof(hoge), ssort);
  for (int i = 0; i < n; i++)
  {
    if (a[0].ind != i)
      printf("%d\n", a[0].val);
    else
      printf("%d\n", a[1].val);
  }
  return 0;
}