#include<stdio.h>
int main (void){
int N,i,j,k,maxt;
scanf("%d",&N);
int A[N+1],max[N+1];
for(i=0;i<N;i++){
scanf("%d",&A[i]);
}
for(i=0;i<N;i++){
maxt=0;
for(j=0;j<i;j++){
if(maxt<=A[j]){
maxt=A[j];
}}
for(k=i+1;k<N;k++){
if(maxt<=A[k]){
maxt=A[k];
}}
max[i]=maxt;
}
for(i=0;i<N;i++){
printf("%d\n",max[i]);
}
return 0;
}