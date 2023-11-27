#include<stdio.h>

int main( )
{
int x, y, z, w;

scanf("%d", &x);
scanf("%d", &y);


if(x < y) {
x = y;
y = w;
w = x;
 }
z = x % y
while(z!=0) {
 x = y;
 y = z;
 z = x % y;
}
printf("%d\n", y)
return 0;
}
