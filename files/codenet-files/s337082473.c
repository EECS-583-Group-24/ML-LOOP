#include<stdio.h>

int main(void){
  int i,j,c=1,real=0;
  int adigi,bdigi;
  char a[100]={0},b[100]={0};
  int reala=0,realb=0,reals[100]={0},digit[100]={0};
  while(c){
    a[0]=getchar();
    for(i=0;a[i]!=' ';){
      if(a[i]==EOF){
	c=0;
	break;
      }
      i++;
      a[i]=getchar();
    }
    adigi=i;
    if(a[0]!=EOF){
      b[0]=getchar();
      for(i=0;b[i]!='\n';){
	i++;
	b[i]=getchar();
      }
      bdigi=i;
    
      for(i=adigi-1,j=1;i>=0;i--,j*=10){
	reala+=(a[i]-48)*j;
      }
      for(i=bdigi-1,j=1;i>=0;i--,j*=10){
	realb+=(b[i]-48)*j;
      }
      reals[real]=reala+realb;
      reala=0;
      realb=0;
      real++;
    }
  }
  for(i=0;i<real;i++){
    for(;reals[i];){
      reals[i]/=10;
      digit[i]++;
    }
    printf("%d\n",digit[i]);
  }
  return (0);
}