#include<stdio.h>
int main(void){
int n;
scanf("%d",&n);
if(n>100){
int member[n],i;
for(i=0;i<n;i++){
scanf("%d",&member[i]);
}
for(i=0;i<n;i++){
printf("%d ",member[i]);
}
printf("\n");
}
return 0;
}