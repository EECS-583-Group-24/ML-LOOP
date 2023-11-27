#include<stdio.h>
int main()
{int a,b;
int m,n;
scanf("%d%d",&m,&n);
if(m<n)
{b=m;
m=n;
n=b;
	}
while(n)
{  a=m%n;
   m=n;
   n=a;
}
printf("%d\n",m);
return 0;}
