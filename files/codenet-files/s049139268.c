#include<stdio.h>

int main(){
int A[200];
int B[200];
int C[200];
int x;
int keta=0;
int i;

for(i=0;scanf("%d %d",&A[i],&B[i])!=EOF;i++){
scanf("%d %d",&A[i],&B[i]);

x=A[i]+B[i];
for(keta=1;(x/10)!=0;keta++){x=x/10;}
C[i]=keta;
}

for(i=0;C[i]!=EOF;i++){
printf("%d\n",C[i]);
}


return 0;
}