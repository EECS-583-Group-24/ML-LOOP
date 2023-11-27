#include <stdio.h>
int main(void){
    // Your code here!
    int n;
    int a[200000];
    int fst=0;
    int scn=0;
    int fn=0;
    int sn=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>fst){
            scn=fst;
            sn=fn;
            fst=a[i];
            fn=i;
        }else if(a[i]>scn){
            scn=a[i];
            sn=i;
        }
    }
    
    for(int i=0;i<n;i++){
        if(i==fn){
            printf("%d\n",scn);
        }else{
            printf("%d\n",fst);
        }
    }
    return 0;
}