#include <stdio.h>
#include <stdlib.h>

int cmpnum(const void * n1, const void * n2)
{
	if (*(long *)n1 > *(long *)n2)
	{
		return -1;
	}
	else if (*(long *)n1 < *(long *)n2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void){

  long n;
  scanf("%ld", &n);
  long a[n];
  long sort[n];
  for (long i = 0; i < n; i++) {
    scanf("%ld", &a[i]);
    sort[i] = a[i];
  }

  qsort(sort, n, sizeof(long), cmpnum);
  long first = sort[0];
  int first_count = 1;
  long second;
  if (sort[1] == first) {
    first_count++;
  } else {
    second = sort[1];
  }

  for (long i = 0; i < n; i++) {
    if (a[i] != first) {
      printf("%ld\n", first);
    } else {
      if (first_count != 1) {
        printf("%ld\n", first);
      } else {
        printf("%ld\n", second);
      }
    }
  }

  return 0;
}