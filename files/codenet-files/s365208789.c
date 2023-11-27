#include <stdio.h>
#define M_PI 3.14159265358979323846

main(){

 int a;
 double b, c;

 scanf("%d", &a);

 b = (double)a*a*M_PI;
 c = (double)2*a*M_PI;

 printf("%f %f\n", b, c);

}