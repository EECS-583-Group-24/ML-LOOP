#include<stdio.h>
 
int main(){
    double r,are,circ;  //r,are,circは実数、areは円の面積、circは円周の長さ
    double p;
    p = 3.141592653589;
    scanf("%lf",&r);  //%lfは実数を求めるための入力変換指定子
    are = p * r * r;
    circ = 2 * p * r;
     
    printf("%.5lf %.5lf\n",are,circ);
     
    return 0;
}
