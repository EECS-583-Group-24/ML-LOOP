#include <stdio.h>
int main(){
    int n;
    int c[3];
    scanf("%d",&n);
    c[0] = n%10;
    c[1] = (n/10)%10;
    c[2]= (n/100)%10;
    for(int i = 0; i<3;i++){
        switch (c[i]){
        case 1:
            c[i] = 9;break;
        case 9:
            c[i] = 1;break;
        default:
            break;
        }
        }
    printf("%d\n",100*c[2]+10*c[1]+c[0]);
    return 0;
}