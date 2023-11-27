#include <stdio.h>

int a,b,c,ans;
scanf("%d",&a);
scanf("%d",&b);
c=a+b;

ans=(int)log10(c)+1;
printf("%d",ans);
}