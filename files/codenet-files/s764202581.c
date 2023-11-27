        #include<stdio.h>
         
        int main(){
         int N;
          scanf("%d",&N);
         int a[200001];
    int i;
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
     
    int j;
    int max;
    for(i=0;i<N;i++){
        max=0;
        for(j=0;j<N;j++){
            if(i!=j){
                if(max<a[j]){
                    max=a[j];
                }
            }
        }
        printf("%d\n",max);
     
    }
          return 0;
        }