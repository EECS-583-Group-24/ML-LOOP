#include<stdio.h>

int main() {
   double w, h, x, y;
   scanf("%lf%lf%lf%lf", &w, &h, &x, &y);
   double yoko, tate;
   int ways = 0;
   int waysy = 0;
   if(w/2. == x) {
      // 直線 x = 1が最適
      ways++;
      yoko = x;
   } else if(w - x > w/2.) { // xがwの半分よりも小さかったら
      // xの値を保存
      yoko = x;
   } else {
      // w - xの値を保存
      yoko = w - x;
   }


   if(h/2. == y) {
      // 直線 y = 1 が最適
      tate = y;
      waysy++;
   } else if(h - y > h/2.) { // yがhの半分よりも小さかったら
      // yの値を保存
      tate = y;
      if(ways > 0) {
          tate = h;
          ways--;
      }
   } else {
      // h - yの値を保存
      tate = h - y;
      if(ways > 0) {
          tate = h;
          ways--;
      }
   }
   if(waysy > 0) {
       yoko = w;
   }
   printf("%lf %d\n", tate * yoko, ways > 0 || waysy > 0? 1 : 0);
   return 0;
}
