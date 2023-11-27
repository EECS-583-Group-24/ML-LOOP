#include<stdio.h>
 #include<vector>
 #include<algorithm>
 using namespace std;
 typedef long long ll;
 int main()
 {
 int a, b, x, y;
 scanf("%d%d%d%d", &a, &b, &x, &y);
 printf("%lf %d\n", double(a)*double(b) / 2, x + x == a
&&y + y == b);
 }