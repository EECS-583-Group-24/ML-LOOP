#include <stdio.h>

int main(void){
int A[200000] = {};             //入力された数値を代入する配列A
int B[200000] = {};             //比較した後の数値を代入する配列B
int N, max[2];                  //max

scanf("%d",&N);                 //Nの入力
for(int i = 0; i < N; i++)
    scanf("%d",&A[i]);          //Aの入力

/*最大値をmaxに保存していく。ただし、i=jの時には比較を行わないようにした。 */
/*
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
}*/
int max_num;
for(int i= 0;i < N+1;i++){
    if(max[0]<A[i]){
        max[1]=max[0];
        max[0]=A[i];
        max_num = i;
    }
    if(max[1]<A[i+1])
        max[1]=A[i+1];
}

//printf("一番大きいのは%d 二番目は%d\n",max[0],max[1]);

for(int k = 0; k < N; k++){
    if(k != max_num)
        printf("%d\n",max[0]);
    else
    {
        printf("%d\n",max[1]);
    }
    

}

}