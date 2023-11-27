#include<stdio.h>
int main(){
    int n;
    int s[100];
    int size=0;
    int i;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
     size++;
     scanf("%d",&s[i]);
    }
    for(i=size;i>=0;i++){
        printf("%d",s[i]);
        if(i != 0) printf(" ");
    }
    printf("\n");
    return 0;
}

