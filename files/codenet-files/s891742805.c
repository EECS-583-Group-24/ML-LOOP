#include<stdio.h>
int replace(  int number)
{

if (number == 0)
return 0;


int digit = number % 10;
if (digit == 1)
digit = 9;
else if (digit == 9)
digit = 1;



return replace(number/10) * 10 + digit;
}
int Convert(  int number)
{
if (number == 0)
return 1;
else
return replace(number);
}
int main()
{
  int number;
scanf("%d", &number);
printf("%d\n", Convert(number));
return 0;
}
