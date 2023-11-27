#include<stdio.h>

int main()
{

int n;
scanf("%d",&n);
int r;
int a,b,c;
a=n%10;
n=n/10;
b=n%10;
n=n/10;
c=n%10;
//printf("%d %d %d",a,b,c);
if(c==1){
c=9;
printf("%d",c);
}
else{
c=1;
printf("%d",c);
}

if(b==1){
b=9;
printf("%d",b);
}
else{
b=1;
printf("%d",b);
}
if(a==1){
a=9;
printf("%d",a);
}
else{
a=1;
printf("%d",a);
}



return 0;
}
