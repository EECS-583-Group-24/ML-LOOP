#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define MAX(p,q) ((p>q)?(p):(q))
#define MIN(p,q) ((p<q)?(p):(q))

#define INF 1000000000;
#define REP(i,n) for(i=0;i<n;i++)

int gcd(int a,int b);
/*比較函数の実装
int -32768 to 32767 (2**15-1)
long -2147483648 to 2147483648 (2**31-1)
*/
int intcmp(const void *a,const void *b){
  return *(int *)a - *(int *)b;
}
//qsort(a,sizeof(a)/sizeof(int),sizeof(int),intcmp);
int longcmp(const void *a,const void *b){
  return *(long *)a - *(long *)b;
}
//qsort(a,sizeof(a)/sizeof(long),sizeof(long),longcmp);
int doublecmp(const void *a, const void *b){
  return *(double *)a - *(double *)b;
}
//qsort(a,sizeof(a)/sizeof(double),sizeof(double),doublecmp);
int main(void)
{
  long long int w,h,x,y;
  scanf("%lld%lld%lld%lld",&w,&h,&x,&y);
  double ans=0.0;
  ans = w*h/2;
  printf("%f\t",ans);
  if(w == x*2 && h == y*2) printf("1");
  else printf("0");
  return 0;
}

int gcd(int a,int b)
{
  int max,min,tmp;
  max = MAX(a,b);
  min = MIN(a,b);
  if(max%min==0) return min;
  else
  {
    tmp = min;
    min = max%min;
    max = tmp;
    return gcd(max,min);
  }
}
