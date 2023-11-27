
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,count=0,x;
    while (scanf("%d %d",&a,&b)!=EOF) {
        x=a+b;
        while (1) {
            x=x/10;
            count++;
            if (x<1) {
                break;
            }
    }
//    for (i=0; i<200; i++) {
//        x=dataset[0][i]+dataset[1][i];
//        while (1) {
//            x=x/10;
//            count++;
//            if (x<1) {
//                break;
//            }
//            
//        }
        
        
        
        printf("%d\n",count);
        count=0;
    }
    
    return 0;
}