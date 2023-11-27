https://abc111.contest.atc#include <stdio.h>
#include <stdlib.h>

int main(){
int i, j, n, k, l;

scanf("%d", &n);

i = n/100;
l = i*100+i*10+i;
k = (i+1)*100+(i+1)*10+(i+1);
if(l - n >= 0){
j = l;
}else{
j = k;
}

printf("%d\n", j);
  return 0;
}
