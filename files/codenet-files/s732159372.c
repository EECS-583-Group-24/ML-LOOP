#include<stdio.h>

int main(void){


 int a,b;

 double c;


 scanf("%d %d",&a,&b);


 c = (double)a/b;


 printf("%d %d\n %lf\n",a/b,a%b,c);


 return 0;


}