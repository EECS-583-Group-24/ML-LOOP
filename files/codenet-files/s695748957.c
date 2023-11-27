#include<stdio.h>

int main()
{
 int num;
 int digitsin[3];
 int digitsout[3];
 int i;

 scanf("%d",&num);
 digitsin[2]=num/100;
 digitsin[1]=(num-100*digitsin[2])/10;
 digitsin[0]=(num-100*digitsin[2]-10*digitsin[1]);
 for(i=0;i<3;i++)
 {
  if (digitsin[i]==1)
  { 
   digitsout[i]=9;
  }else if (digitsin[i]==9)
  {
   digitsout[i]=1;
  }else
  {
   digitsout[i]=digitsin[i];
  }
 }
 for(i=0;i<3;i++) printf("%d",digitsout[2-i]);
 printf("\n");
 return 0;
}
