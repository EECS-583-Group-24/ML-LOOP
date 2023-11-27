#include<stdio.h>
#include<math.h>

int main(void)
{
int w,h,x,y,z;
double s;
scanf("%d %d %d %d",&w,&h,&x,&y);

if((double)x==((double)w/2)&&(double)y==((double)h/2))
{
z=1;
}else{
z=0;
}

s=((double)w*(double)h)/2;

printf("%f %d",s,z);

return 0;
}