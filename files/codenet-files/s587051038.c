#include<stdio.h>
 
int main(void){
int a, b, c, i;
 
while(scanf("%d %d", &a, &b) != EOF){
c = a + b;
while( c != 0){
c /= 10;
}
printf("%d\n", i);
}
return 0;
}
 