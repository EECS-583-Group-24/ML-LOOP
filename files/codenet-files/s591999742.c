#include <stdio.h>

int main(void)
{
  int array[200000],i,max,second,num;

  scanf("%d",&num);

  for(i=0;i<num;i++)
  {
    scanf("%d",&array[i]);
  }

  max = second = array[0];

  for(i=0;i<num;i++)
  {
    if(array[i] > max)
    {
      second = max;
      max = array[i];
    }
  }

  for(i=0;i<num;i++)
  {
    if(array[i] == max)
    {
      printf("%d\n",second);
    }
    else
    {
      printf("%d\n",max);
    }
  }

  return 0;
}
