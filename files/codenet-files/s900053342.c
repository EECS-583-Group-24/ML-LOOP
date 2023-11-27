#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(void){
    long N;
    long *a;
    scanf("%ld",&N);
    a=(long *)malloc(sizeof(long)*N);
    long i;
    long max=0;
    long second=0;
    for(i=0;i<N;i++){
        scanf("%ld",&a[i]);
        if(a[i]>max){
            max=a[i];
        }
        else if(second<a[i]&&a[i]<max){
            second=a[i];
        }
    }
    long maxcount=0;
    for(i=0;i<N;i++){
        if(a[i]==max){
            maxcount++;
        }
    }
    if(maxcount!=1){
        for(i=0;i<N;i++){
            printf("%ld\n",max);
        }
    }
    else{
        for(i=0;i<N;i++){
            if(a[i]==max){
                printf("%ld\n",second);
            }
            else{
                printf("%ld\n",max);
            }
        }
    }
    return 0;

}