#include<stdio.h>
int main()
{
int a,j,max,smax;
  scanf("%d",&a);
int b[a];
  scanf("%d %d",&b[0],&b[1]);
  if(b[0]>b[1]){max=b[0];
                smax=b[1];}
  else         {max=b[1];
                smax=b[0];}
  for(j=2;j<a;++j)
  {
  scanf("%d",&b[j]);
  if(b[j]>max) max=b[j];
  else if(b[j]>smax) smax=b[j];
  }
  
for(j=0;j<a;++j)  
{if(b[j]==max) printf("%d\n",smax);
else printf("%d\n",max);
}
  
return 0;
}