#include<stdio.h>
int main(){
int w, h, x, y;
scanf("%d",&w); 
scanf("%d",&h); 
scanf("%d",&x); 
scanf("%d",&y); 
double s=w*h/2;
if(w==x*2&&h=y*2)
printf("%lf 1",s);
else
printf("%lf 0",s);
return 0;
}