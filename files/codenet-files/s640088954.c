#include<stdio.h>
int Euclidean(int,int);
int main(){
  int a,b,result;
  scanf("%d %d",&a,&b);
  if(a<=b) result=Euclidean(b,a);
  else result=Euclidean(a,b);
  printf("%d\n",result);
  return 0;
}
int Euclidean(int x,int y){
  int r,s[100],i=0,j;
  r=x%y;
  printf("%d\n",r);
  s[i]=r;
  while(r!=0){
    if(i!=0){
      r=s[i-1]%r;
      printf("%d\n",r);
      if(r==0)return s[i-1];
      s[i]=r;
	}
    else{
      r=y%r;
      printf("%d\n",r);
    }
    i++;
  }
}