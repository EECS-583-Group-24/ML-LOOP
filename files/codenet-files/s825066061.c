/*
	submission # - User: herp_sy
	https://atcoder.jp/contests/
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define _CRT_SECURE_NO_WARNINGS
#define TLong long long
#define TBMod 1000000007

int DESC(const int *a,const int *b){
	return (*b - *a);
}

int main(int argc, char const *argv[])
{
	int n,a[200003],b[200003];
	scanf("%d",&n);
	for (int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	qsort(b,n,sizeof(int),DESC);
	for (int i = 0; i < n; ++i)
	{
		if(a[i] == b[0])	printf("%d\n", b[1]);
		else printf("%d\n", b[0]);
	}
	return 0;
}
