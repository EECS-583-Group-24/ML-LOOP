#include<stdio.h>

#define N 1000000000

main()
{

  int x,y,i,d;

  scanf("%d%d",&x,&y);
  
  while(1<x<N && 1<y<N)
    {

      if(x>y)
	{
	  if(x%y==0 ){
	    d = y;

	  
	    break;
	  }
	  x = x%y;
	  d = y;

	}
      if(x<y ){
	if(y%x==0 ){
	  d = x;


	  break;
	}
	y = y%x;
	d = x;

      }
    }
  printf("%d\n",d);
  return 0;
}