#include<stdio.h>

int main()
{
int due = 0;
int a=0,b=0,c=0;
scanf("%d",&due);
a = due / 100;
b = a / 10;
c = b / 1;

if(a == '9')
{a = '1';}else{a = '9';}
if(b == '9')
{b = '1';}else{b = '9';}
if(c == '9')
{c = '1';}else{c = '9';}

printf("%d",a*100+b*10+c);
return 0;
}
