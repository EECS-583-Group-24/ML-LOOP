#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void swap(long *x,long *y){
    long int tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}
long part(long box[],long left,long right){
    long i,j,pin;
    i=left;
    j=right+1;
    pin=left;
    do{
        do{i++;}while(box[i]<box[pin]);
        do{j--;}while(box[pin]<box[j]);
        if(i<j){
            swap(&box[i],&box[j]);
        }
    }while(i<j);
    swap(&box[pin],&box[j]);
    return j;
}
void quicksort(long box[],long left,long right){
    long pin;
    if(left<right){
        pin=part(box,left,right);
        quicksort(box,left,pin-1);
        quicksort(box,pin+1,right);
    }
}

int main(void){
    long N;
    long *a,*b;
    scanf("%ld",&N);
    a=(long *)malloc(sizeof(long)*N);
    b=(long *)malloc(sizeof(long)*N);
    long i;
    
    for(i=0;i<N;i++){
        scanf("%ld",&a[i]);
        b[i]=a[i];
    }

    quicksort(b,0,N-1);
    for(i=0;i<N;i++){
        if(a[i]==b[N-1]){
            printf("%ld\n",b[N-2]);
        }
        else{
            printf("%ld\n",b[N-1]);
        }
    }
   
    return 0;

}