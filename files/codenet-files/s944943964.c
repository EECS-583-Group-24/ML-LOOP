#include <stdio.h>
int main(void){
    // Your code here!
    int n;
    scanf("%d",&n);
    int d[n],max[2],at[2];
    int i;
    max[0]=0;
    at[0]=0;
    for(i=0;i<n;i++){
        scanf("%d",&d[i]);
        if(max[0]<d[i]){
            max[1]=max[0];
            at[1]=at[0];
            max[0]=d[i];
            at[0]=i;
        }else if(max[1]<d[i]){
            max[1]=d[i];
            at[1]=i;
        }
            
        
    }
    for(i=0;i<n;i++){
        if(at[0]==i){
        printf("%d\n",max[1]); 
            
        }else{
        printf("%d\n",max[0]);
        }
        
    }
   
    return (0);
}