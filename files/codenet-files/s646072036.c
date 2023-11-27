#include<stdio.h>
int main()
{
  long a[200001],i,j,n,large,large1;
  scanf("%ld",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%ld",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    if(i!=n)
    {
    large=i+1;
    large1=a[large];
      
      for(j=1;j<=n;j++)
    {
      if(j!=i)
      {
       if(a[j]>large1)
       {
         large1=a[j];
       }
      }
      
    }
      printf("%ld\n",large1);
    }
    else
    {
      large1=a[1];
      for(j=2;j<=n-1;j++)
      {
        if(a[j]>large1)
        {
          large1=a[j];
        }
      }
      printf("%ld\n",large1);
    }
    
  }
  return 0;
}