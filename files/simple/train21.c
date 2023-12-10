#include<stdio.h>
#include<math.h>

int main(){
double r  = 2301501.23;
double s ;
double l ;

if(r>=0){
s = M_PI*r*r ;
l = 2*M_PI*r ;

printf("%lf %lf",s,l) ;

return 0 ;
}
}


/* {を忘れないように!! */