#include<stdio.h>
#include<stdlib.h>

int main()
{
	
	int w, h, x, y, x1, y1, w1, h1, b;
	float s, s1, s2;
  
	scanf("%d %d %d %d", &w, &h, &x, &y);
  	
  	if(w>x*2) x1=x;
    else x1=w-x;
  	s1=x1*h;
  	
    if(h>y*2) y1=y;
  	else y1=h-y;
  	s2=w*y1;
  	
  	if(s1<s2) s=s2;
    else s=s1;  

  	if(w%2==0&&h%2==0){
      if(w==h){
    		w1=w/2;
    		h1=h/2;
    		if(x==w1&&y==h1) b=1;
      		else b=0;
      }
    }
  
  	printf("%f %d\n", s, b);
      
  	return 0;
}