#include<stdio.h>
#include<string.h>
int main()
{
int i,len,l=0,l1=0;
char a[50],b[50],c[50];
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]=='0')
{
b[l]='0';
l++;
}
else if(a[i]=='1')
{
b[l]='1';
l++;
}
else if(a[i]=='B')
{
if(l>0)
b[l-1]=' ';
l--;
}
}
for(i=0;i<l;i++)
{
if(b[i]!=' ')
{
c[l1]=b[i];
l1++;
}
}
c[l1]='\0';
printf("%s",c);
}