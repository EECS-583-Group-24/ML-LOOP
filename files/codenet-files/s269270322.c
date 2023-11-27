#include<stdio.h>
int main(void){
        int n,i,x,f;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++){
         scanf("%d",&a[i]);
        }
        for(i=n-1;i>0;i=i-1){
         printf("%d ",a[i]);
        }
        printf("%d\n",a[0]);

        
	return 0;
}
