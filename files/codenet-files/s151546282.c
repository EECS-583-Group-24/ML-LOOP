#include<stdio.h>

int main(){

int a,n;

scanf("%d",&n);
printf("%d\n",n);
int scan[n];

for(int i = 0; i < n; i++){
scanf("%d",&a);
scan[i] = a;
}
for(int j = n; j-1 >= 0; j--){
printf("%d ",scan[j-1]);
  
}

return 0;
}

