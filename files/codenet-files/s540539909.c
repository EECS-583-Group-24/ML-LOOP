#include <stdio.h>

int main(void)
{
  int array[200000],num,i,com,alt,j;

  scanf("%d",&num);

  for(i=0;i<num;i++)
  {
    scanf("%d",&array[i]);
  }

  for(i=0;i<num;i++)
  {
    alt = array[i];
    array[i] = 0;
    com = array[i];
    for(j=0;j<num;j++)
    {
      if(array[j] > com)
      {
        com = array[j];
      }
    }
    printf("%d\n",com);
    array[i] = alt;
  }

  return 0;
}
