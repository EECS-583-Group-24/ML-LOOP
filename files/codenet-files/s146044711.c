#include <stdio.h>

int main(void){
    /*宣言部*/
    long nnum1, nnum2;    /*nnum1, nnum2:自然数a, b*/
    
    /*入力部*/
    scanf("%d %d", &nnum1, &nnum2);
    
    /*計算部*/    /*ユークリウッド互除法*/
    while (!(nnum1==nnum2)){    /*nnum1とnnum2が等しくなるまでループ*/
        /*大きい方から小さい方を引き続ける*/
        if (nnum1 > nnum2){
            nnum1 -= nnum2;
        }else if (nnum1 < nnum2){
            nnum2 -= nnum1;}
    }
    
    /*出力部*/
    printf("%d\n", nnum1);    /*nnum1とnnum2どちらも同じ最大公約数になってるので
                                とりあえずnnum1を表示*/
    return 0;
}