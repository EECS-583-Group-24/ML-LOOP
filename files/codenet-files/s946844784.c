#include<stdio.h>

int main(void)
{
  int a[200] ={0};
  int b[200] = {0};
  int i=1, j=0, k;

  while(1){
    scanf("%d %d", &a[j], &b[j]);
    j++;
    if(scanf("%d %d", &a[j], &b[j]) == EOF){
      break;
    }
  }

  for(k=0; k<j; k++){
    if(a[k]+b[k]>=10 && a[k]+b[k]<=99){
      i=2;
    }else if(a[k]+b[k]>=100 && a[k]+b[k]<=999){
      i=3;
    }else if(a[k]+b[k]>=1000 && a[k]+b[k]<=9999){
      i=4;
    }else if(a[k]+b[k]>=10000 && a[k]+b[k]<=99999){
      i=5;
    }else if(a[k]+b[k]>=100000 && a[k]+b[k]<=999999){
      i=6;
    }else if(a[k]+b[k]>=1000000 && a[k]+b[k]<=9999999){
      i=7;
    }
    printf("%d\n", i);
  }


  return 0;
}