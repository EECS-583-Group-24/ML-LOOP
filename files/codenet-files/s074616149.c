#include<stdio.h>
int replace(long int number)
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
int Convert(long int number)
{
if (number == 0)
return 1;
else
return replace(number);
}
int main()
{
long int number;
printf("\nEnter the number : ");
scanf("%d", &number);
printf("\nNumber after replacement : %d\n", Convert(number));
return 0;
}
