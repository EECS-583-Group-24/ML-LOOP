#include<stdio.h>

int main()
{
     int a,b,s,i;
     for(i=1;i<=200;i++){
     scanf("%d %d",&a,&b);
      s=a+b;
      if(s>=0 && s<=9)
      printf("1\n");
      else if(s>=10 && s<=99)
      printf("2\n");
      else if(s>=100 && s<=999)
      printf("3\n");
       else if(s>=1000 && s<=9999)
      printf("4\n");
       else if(s>=10000 && s<=99999)
      printf("5\n");
       else if(s>=1000000 && s<=999999)
      printf("6\n");
      else
      printf("7\n");
      }


      return 0;
}

