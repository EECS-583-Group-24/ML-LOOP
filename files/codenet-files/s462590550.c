#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) > (b) ? (b) : (a))
#define REP(i, n) for(int i = 0; i < n; i++)
#define INF 1000000000000 //10^12
#define MOD 1000000007
typedef long long ll;

int sort(const void *a, const void *b){
  return *(int *)b - *(int *)a;
}

int
main(int argc, char *argv[])
{
  int n;
  int a[200000]; int b[200000];
  int max = 0;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
    b[i] = a[i];
  }
  
  qsort(b, n, sizeof(int), sort);

  for(int i = 0; i < n; i++){
    if(a[i] == b[0]) printf("%d\n", b[1]);
    else printf("%d\n", b[0]);
  }
  return 0;
}

  
