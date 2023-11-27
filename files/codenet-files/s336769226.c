#include<stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#define loop(i, l, r) for(i=l; i<r; i++)/*Instead of function, (for).*/
#define rep(i,r) for(i=0; i<r; i++)
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))
typedef long long int lli;
/*Return Combination ,(nCr)*/
int combi(int n, int r)
{
	if(r==0 || r==n) return 1;
	else return combi(n-1,r) + combi(n-1,r-1);
}
/*Return gcd(a, b)*/
int gcd(int a, int b){
	if(b == 0) return a;
	else return gcd(b, a % b);
}
//qsort�֐��Ɏg��compare�֐�,(long long int, int, double�^)
int compare_lli(const void *a, const void *b)
{
    return *(lli*)a - *(lli*)b;
}
int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}
int compare_double(const void *a, const void *b)
{
    return *(double*)a - *(double*)b;
}
/*qsort(data, 10, sizeof(int_lli_double), compare_int);*/
/*qsort(�z��, �v�f��, sizeof(�z��̌^), compare_�z��̌^);*/
int main(void)
{
	lli n, i, j, max=0;
	scanf("%lld", &n);
	lli a[n], b[n];
	rep(i,n) scanf("%lld", &a[i]);
	memcpy(b, a, sizeof(a));
	qsort(a, n, sizeof(lli), compare_lli);
	rep(i,n){
		j = n-1;
		if(a[j] == b[i]) j--;
		printf("%lld\n", a[j]);
	}
	return 0;
}