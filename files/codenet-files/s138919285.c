#include<stdio.h>

int main(){

int j,i,a,n;

scanf("%d",&n);

int scan[n];

for(i = 0; i < n; i++){
scanf("%d",&a);
scan[i] = a;
}
for( j = n; j-1 >= 0; j--){
  if(j-1)printf(" ");
printf("%d",scan[j-1]);
  
}

return 0;
}
