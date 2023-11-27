//  AtCoder Beginner Contest 134 
//  ドタバタしてるけど頑張るぞー
#include <stdio.h>
int main(void){
    int i,j;    //ループ用変数
    int n,count;
    int d[256];
    int d2[256];
    int emp;
    int max,max2;
    char box[256] = {};
    char box2[256] = {};
    count = 0;
    
    // INFO //
    // n 木の本数
    // d 監視員が他に見れる本数    
    //  入力
    scanf("%d",&n);
    for (i = 0; i < n; i++){
        scanf("%d",&d[i]);
        d2[i] = d[i];
    }
    //  処理
     for (i = 0; i < n; i++){
        max = 0;
        max2 = 0;
        for (j = 0; j < n; j++){
            if (max < d[j]){
                max2 = max;
                max = d[j];
            }else if (max2 < d[j]){
                max2 = d[j];
            }
        }
        //  出力
        if (max == d[i]){
            printf("%d\n",max2);
        }else{
            printf("%d\n",max);
        }
    }   
   
    


}
