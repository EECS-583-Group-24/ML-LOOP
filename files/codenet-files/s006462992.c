#include<stdio.h>

int main(){

int a,n;

scanf("%d",&n);

int scan[n];

for(int i = 0; 0 < n; i++){
scanf("%d",&a);
scan[i] = a;
}
while(n-1 >= 0){
printf("%d",scan[n]);
if(n != 0){
  printf(" ");
  }
n--;
}


return 0;
}

