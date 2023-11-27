#include<stdio.h>
int main(void){
        int n,i,x,f;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
         scanf("%d",&a[i]);
        }
        for(i=n;i>0;i-1){
         printf("%d ",a[i]);
        }
        printf("%d",a[0]);

        
	return 0;
}
