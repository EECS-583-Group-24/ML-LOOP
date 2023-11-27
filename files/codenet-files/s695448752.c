#include<stdio.h>
void sort(int *x,int *y);
int GCD(int x,int y);
int main(void){
    int x,y;
    scanf("%d %d",&x,&y);
    sort(&x,&y);
    printf("%d\n",GCD(x,y));
    return 0;
}
void sort(int *x,int *y){
    if(*x<*y){
        int temp=*x;
        *x=*y;
        *y=temp;
    }
}
int GCD(int x,int y){
    int i,j=0;
    int cd[100000]={0};
    for(i=1;i<=y/2;i++)
        if(y%i==0 && x%i==0){
            cd[j]=i;
            j++;
        }
        if(x%y==0)
            cd[j+1]=y;
    for(j=0;cd[j]!=0;j++)
        if(cd[j+1]==0)
            return cd[j];
}