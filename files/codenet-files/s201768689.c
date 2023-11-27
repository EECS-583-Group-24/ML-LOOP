//  AtCoder Beginner Contest 134 
//  ドタバタしてるけど頑張るぞー
#include <stdio.h>
int main(void){
    int i,j;    //ループ用変数
    int n,count;
    int d[100000] = {};
    int d2[100000] = {};
    int emp;
    int max,max2;
    count = 0;
    max = 0;
    max2 = 0;

    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%d",&d[i]);

        if (max < d[i]){
            count = 0;
            max2 = max;
            max = d[i];
        }else if (max2 < d[i]){
            max2 = d[i];
        }
        if (max == d[i]){
            count++;
        }
    }
    //  処理
    if (count != 1){
        max2 = max;
    }
    
    for (i = 0; i < n; i++){

        //  出力

        if (max == d[i]){
            printf("%d\n",max2);
        }else{
            printf("%d\n",max);
        }
    }   
   


}
