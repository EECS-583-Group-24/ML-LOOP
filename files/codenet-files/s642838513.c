#include<stdio.h>
         
int main(void){
         
int r;
double S,length;
double pi=3.141592;
scanf("%d",&r);
  
S=pi*r*r;
length=2*r*pi;
  
printf("%.6f %.6f",S,length);
    
return 0;
}
