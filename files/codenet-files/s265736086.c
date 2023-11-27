#include<stdio.h>
int main(void){
int a,b;
while(scanf("%d %d", &a, &b) != EOF){
a = a+b;
b = 0;
while(a>1){
b++;
a = a/10;
}
printf("%d\n",b);
}
return 0;
}