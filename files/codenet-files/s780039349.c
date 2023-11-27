#include<stdio.h>

int main(){
    int n;
    int a[200000];
    int first,second;
    int tmp,i;
    
    scanf("%d",&n);
    for(i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    
    if(a[0] >= a[1]){
        first = a[0];
        second = a[1];
        tmp = 0;
    }else{
        first = a[1];
        second = a[0];
        tmp = 1;
    }
    
    if(n >= 3){
        for(i = 2 ; i < n ; i++){
            if(a[i] >= first){
                tmp = i;
                second = first;
                first = a[i];
            }
            if(a[i] >= second && a[i] < first){
                second = a[i];
            }
        }
        for(i = 0 ; i < n ; i++){
            if(i == tmp) printf("%d\n",second);
            else printf("%d\n",first);
        }
    }else{
        printf("%d\n%d\n",a[1],a[0]);
    }
    
    return 0;
}
