#include <stdio.h>

int main(void){

    int a,b,c,i;

    while(1){

        scanf("%d %d",&a,&b);

        c=a+b;

        for(i=0;c!=0;i++){

            c=c/10;

        }

        printf("%d\n",i);

    }



    

    return 0;

}