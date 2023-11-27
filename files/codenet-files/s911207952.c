#include <stdio.h>
int main(void){
    // Your code here!
    
    int w,h,x,y;
    scanf("%d %d %d %d",&w,&h,&x,&y);
    
    int i,j=0;
    double max = -1.0;
    double m1=0,m2=0,k=0;
    
    k = w*h;
    
    for(i=0;i<2;i++){
        if(i==0){
            m1 = x*h;
            m2 = k-m1;
            if(m1 < m2) max = m1;
            else max = m2;
        }
        else if(i==1){
            m1 = w*y;
            m2 = k-m1;
            if(m1 < m2) {
                if(max == m1) {
                    j=1;
                } else if(max < m1){
                    max = m1;
                }
            } else {
                if(max == m2) {
                    j=1;
                } else if(max < m2){
                    max = m2;
                }
            }
        }
    }
    
    
    printf("%lf %d\n",max,j);
    
    return  0;
}