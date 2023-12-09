#include <stdio.h>

int main(){

int x,y,t,c,k, i;

x = 2031;
y = 233;
t = 23;

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

return 0;
}

  

 
