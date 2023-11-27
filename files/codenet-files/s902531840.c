#include<stdio.h>
#include<stdlib.h>

int partition(int a[], int left, int right);
void quick_sort(int a[], int left, int right);

void quick_sort(int a[], int left, int right){
    int mid;
    if (left < right){
        mid = partition(a,left,right);
        quick_sort(a,left,mid);
        quick_sort(a,mid+1,right);
    }
}

int partition(int a[], int left, int right){
    int pivot, swap;
    int i,j;
    pivot = a[left];
    i = left;
    j = right;
    while(1){
        while(a[i] < pivot){
            i++;
        }
        while(pivot < a[j]){
            j--;
        }
        if(i < j){
            swap = a[i];
            a[i] = a[j];
            a[j] = swap;

        }else{
            return j;
        }
        i++;
		j--;
    }
    return j;
}

int main(void){
    int N,i;
    scanf("%d",&N);
    int a[N],b[N];

    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        b[i] = a[i];
    }
    quick_sort(a,0,N-1);
    for(i=0;i<N;i++){
        if(b[i] == a[N-1]){
            printf("%d\n",a[N-1]);
        }else{
            printf("%d\n",a[N-2]);
        }
    }
    return 0;
}