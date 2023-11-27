int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    int i=0;
    while(i<n){
        scanf("%d",&a[i]);
        i++;
    }
    for(i=n-1;i>=0;i--){
        printf("%d",a[i]);
        if(i!=0)
        printf(" ");
    }
    printf("\n");
    return 0;

}