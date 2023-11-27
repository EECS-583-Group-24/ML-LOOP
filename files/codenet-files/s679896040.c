#include <stdio.h>
int main(void){
    // Here your code !
    int a,b;
    int work;
    int cnt=0;
    int i;
    for(i=0;i<200;i++){
        cnt=0;
        if(scanf("%d %d",&a,&b) == EOF) break;
        work = (a+b)/10;
        while(work){
            cnt++;
            work = work/10;
        }
        printf("%d\n",cnt);
    }
    return 0;
}