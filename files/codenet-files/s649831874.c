#include <stdio.h>

int main(){

int x,y,t,c,k;

scanf("%d %d\n",&x,&y);

if(y>x){
 t = y;
 y = x;
 x = t;
}
k = 0;
c = x%y;

for(i=1;i<=y;i++){
 if((y%i==0) && (x%i==0)){
  k = i;
  }
}

printf("%d\n",k);

return 0
}

  

 
