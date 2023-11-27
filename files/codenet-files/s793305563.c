#include <stdio.h>

int main(void){
int A[200000] = {};             //入力された数値を代入する配列A
int B[200000] = {};             //比較した後の数値を代入する配列B
int N, max;                     //最大値の一時保存max

scanf("%d",&N);                 //Nの入力
for(int i = 0; i < N; i++)
    scanf("%d",&A[i]);          //Aの入力

/*最大値をmaxに保存していく。ただし、i=jの時には比較を行わないようにした。 */
for(int i = 0; i < N; i++){
    max = 0;
    for(int j = 0; j < N; j++){
        if(i != j){
            if(max<A[j]){
                max=A[j];
                B[i]=max;
            }
        }
    }
}
    
for(int k = 0; k < N; k++)
    printf("%d\n", B[k]);

}