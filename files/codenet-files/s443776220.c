#include <stdio.h>
#define DATAMAX 200
#define DIGITMAX 7
int main(void) {
    long int a,b,sum;
    int i,j;
    int count;
    for(i=0;i<DATAMAX;i++){
        scanf("%ld %ld",&a,&b);
//        printf("%d,%d\n",a,b);
        if(a<0||b<0){  //データの終わりならプログラム終了
            break;
        }
        
        count=0;
        sum=a+b;
        for(i=0;i<DIGITMAX;i++){
            sum/=10;
            count++;
            if(sum==0){ // sumが1以下になれば
                printf("%d\n",count);
                break;
            }else{
            }
        }
    }
    
        return 0;
}