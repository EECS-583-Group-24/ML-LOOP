#include <stdio.h>

int main() {
  int n, a[100], count;

  // 1行目（数列の長さ）の読み込み
  scanf("%d", &n);
  // 2行目（数列の値）の読み込み
  for(count=0; count<n; count++) {
    scanf("%d", &a[count]);
  }

  // 値の出力
  for(count=n; count>0; count--) {
    printf("%d", a[count-1]);
    // 最後でなければ空白を表示
    if(count!=1) {
      printf(" ");
    }
  }

  return 0;
}