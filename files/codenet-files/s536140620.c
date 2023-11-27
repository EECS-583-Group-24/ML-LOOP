/* ABC-A.c
   Yuta Takayanagi */

#include<stdio.h>
int main(void){
    int width, height, x, y;
    float area;

    scanf( "%d %d %d %d" , &width, &height, &x, &y);
    /* 長方形の幅、高さと点の座標を入力 */

    area = (float)(width * height) /2; /* 長方形の面積を求める */

    printf( "%f " , area);
    /* 長方形の中心を通る時、半分となり大きくない方の最大となる
       これは点がどこであっても存在する。 */

    if(2*x==width && 2*y==height){
    /* 点が長方形の中心と一致する時条件を満たす直線は無限に存在する */

        printf( "1\n" );

    }else{

        printf( "0\n" );

    }

    return 0;
}