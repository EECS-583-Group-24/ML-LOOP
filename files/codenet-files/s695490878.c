
#include<stdio.h>
int main()
{
char s[10000],a[10000];
int i,j;
scanf("%s",s);
i=0;
j=0;
while(s[i]!='\0')
{
if(s[i]=='0')
a[j]='0';
else
if(s[i]=='1')
a[j]='1';
else
if(s[i]=='B')
{
if(j==0)
goto x;
else
{j=j-1;
goto x;
}
}
j++;
x:
i++;
}
printf("%s",a);
return 0;
}
