#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#define LL long long
#define INF 1<<31-1
#define MIN(x,y) ((x)<(y)?(x):(y))
#define MAX(x,y) ((x)<(y)?(y):(x))
#define FOR(i,a,n) for(i=a;i<n;i++)
#define MOD 1000000007
#define NUM 100005
void swap(int* a,int* b){int tmp=*a;*a=*b;*b=tmp;}
int cmp(const void* a,const void* b){return *(int*)a-*(int*)b;}

int main() {
  int W,H,x,y,i,a=0;
	double ans;
  scanf("%d%d%d%d",&W,&H,&x,&y);
	if(W%2==0&&H%2==0&&W/2==x&&H/2==y)a=1;
	ans=(double)W*(double)H/2;

  printf("%lf %d\n",ans,a);
	return 0;
}
