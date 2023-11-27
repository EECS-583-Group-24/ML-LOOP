#include<stdio.h>
int main(void){

int n, i,k[3];

scanf("%d", &n);

i=2;
while(n){
 k[i]=n%10;
 n=n/10;
 i--;
}
for(i=0; i<3; i++){
 if(k[i]==1)
  k[i]=9;
 else if(k[i]==9)
  k[i]=1;
}
for(i=0; i<3; i++){
 printf("%d", k[i]);
}
printf("\n");


return 0;
}
