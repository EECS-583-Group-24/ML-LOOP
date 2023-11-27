#include<stdio.h>
#include<math.h>

int main(){
double r ;
double s ;
double l ;
scanf("%lf",&r) ;

if(r>=0){
s = M_PI*r*r ;
l = 2*M_PI*r ;

printf("%lf %lf",s,l) ;

return 0 ;
}
}


/* {を忘れないように!! */