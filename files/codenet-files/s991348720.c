#include<stdio.h>

int main()
{
int due = 0;
int a=0,b=0,c=0;
scanf("%d",&due);
a = due / 100;
b = (due - a*100) / 10;
c = (due - a*100 -b*10) / 1;

a=10-a;b=10-b;c=10-c;

printf("%d",a*100+b*10+c);
return 0;
}