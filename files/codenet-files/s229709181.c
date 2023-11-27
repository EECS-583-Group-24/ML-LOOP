#include<stdio.h>

int main(){
  int a,b,d,i,ret;
  while(scanf("%d %d",&a,&b)=EOF)
    {
      d=1;
      for(i=0;i<8;i++)
	{
	  if(a+b==0){printf("1\n");break;}
	  if(d<=(a+b) && (d*10)>(a+b)){printf("%d\n",i+1);break;}
	  else d=d*10;
	}
    }
  return 0;
}