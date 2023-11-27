#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap_int(int *x, int *y) {int temp;temp = *x;*x = *y;*y = temp;}
void swap_char(char *x, char *y) {char temp;temp = *x;*x = *y;*y = temp;}
int max(int x, int y) { return x > y ? x : y; }
int min(int x, int y) { return x > y ? y : x; }

int main(){
    double w,h,x,y;
    double ans1;
    int ans2;

    scanf("%lf %lf %lf %lf",&w,&h,&x,&y);

    double x1=x,x2=(w-x);
    double sx;
    if((x1*h)<(x2*h)){
        sx=x1*h;
    }else{
        sx=x2*h;
    }

    double y1=y,y2=(h-y);
    double sy;
    if(y1*w<y2*w){
        sy=y1*w;
    }else{
        sy=y2*w;
    }

    if(sx==sy){
        ans2=1;
    }else{
        ans2=0;
    }
    if(sx<sy){
        ans1=sy;
    }else{
        ans1=sx;
    }

    printf("%.12lf %d\n",ans1,ans2); 
    return 0;
    
}