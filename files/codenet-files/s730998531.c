#include<stdio.h>
int main()
{
int i,m,n[100];
scanf("%d",&m);
for(i=0;i<m;i++)
{
	scanf("%d",&n[i]);
}
for(i=m;i>0;i--)
{
	printf(" %d",n[i-1]);
}
printf("\n")
return 0;
}