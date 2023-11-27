#include<stdio.h>

int main(void){
    double w, h, a, b;
    scanf("%lf %lf %lf %lf", &w, &h, &a, &b);

    double s[5], max=0;
    int another=0, i=0;

    if(a == w/2.0 || b == h/2.0 || a == b){
        printf("%lf ", w*h/2.0);
        if(a == w/2.0 && b == h/2.0) printf("%d\n", 1);
        else printf("%d\n", 0);
    }else {
        if( (double)a > w/2.0 )a = w - a;
        if( (double)b > h/2.0 )b = h - b;
        s[0] = a*h;
        s[1] = b*w;
        if(a*h <= w*(h-b)) s[2] = (a*h*h)/( 2.0*(h-b) );
        else s[2] = h*w - w*w*(h-b)/(2*a);
        if(b*w <= h*(w-a)) s[3] = (b*w*w)/( 2.0*(w-a) );
        else s[3] = h*w - (h*h*(w-a))/(2*b);
        s[4] = (a+b)*(a+b)/2.0;
        max = s[0];
        for(i=1; i<5; i++){
            if(max < s[i]){
                max = s[i];
                another = 0;
            }else if(max ==s[i]) another = 1;

            printf("%lf %d\n", max, another);
        }
    }
    return 0;
}