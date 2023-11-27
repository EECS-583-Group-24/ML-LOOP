#include <stdio.h>
int main(void)
{
    int w, h, x, y, n;
    double m1, m2, m;
    scanf("%d%d%d%d", &w, &h, &x, &y);

if(x==0&&y==0){
    printf("0.000000 0");
}

if(w*y < w*(h-y)){
     m1 = (double)w*y;
}else{
    m1 = (double)w*(h-y);
}

if(h*x < h*(w-x)){
    m2 = (double)h*x;
}else{
    m2 = (double)h*(w-x);
}

if(m1 > m2){
    m = m1;
}else{
    m = m2;
}

if(m1 == m2){
    n = 1;
}else{
    n = 0;
}

printf("%f %d", m, n);

return 0;

}