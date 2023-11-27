#include<stdio.h>
#include<string.h>
int main(){
  int a,b,total=1,i=10,j,ab;
  whlie(1){
    scanf("%d %d",&a,&b);
    ab=a+b;
    for(j=0;j<6;j++){
      if(ab/i>=1){
	total++;
      }
      i=10*i;
    }
    printf("%d\n",total);
  }  
  return(0);
}