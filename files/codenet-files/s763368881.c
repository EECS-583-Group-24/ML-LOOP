#include <stdio.h>

void swap(int *swapa, int *swapb);
void quick_sort(int b[], int left, int right);

int main() {
  int a[200000], n;
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < n; i++) {
    quick_sort(a, 0, n - 1);
    printf("%d", a[n - 1]);
  }
  return 0;
}

void swap(int *swapa, int *swapb) {
  int temp;
  temp = *swapa;
  *swapa = *swapb;
  *swapb = temp;
}

void quick_sort(int b[], int left, int right) {
  int lp, rp, mid;
  mid = b[left];
  lp = left;
  rp = right;

  while(lp < rp) {
    while (b[lp] <= mid && lp <= rp) {
      lp++;
    }
    while (mid < b[rp] && lp <= rp) {
      rp--;
    }
  }
  if (lp < rp) {
    swap(&b[lp], &b[rp]);
  }
  swap(&b[left], &b[rp]);
  if(left < rp - 1) {
    quick_sort(b, left, rp - 1);
  }
  if (rp + 1 < right) {
    quick_sort(d, rp + 1, right);
  }
}
