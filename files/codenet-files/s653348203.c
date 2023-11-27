
#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>

#pragma region 定義
#define i_cin(X) scanf("%d", &X)
#define i_cin2(X,Y) scanf("%d %d",&X,&Y)
#define i_cin4(X,Y,Z,W) scanf("%d %d %d %d",&X,&Y,&Z,&W)
#define i_cin3(X,Y,Z) scanf("%d %d %d",&X,&Y,&Z)
#define l_cin(X) scanf("%ld",&X)
#define f_cin(X) scanf("%f",&X)
#define l_cin2(X,Y) scanf("%ld %ld",&X,&Y)
#define s_cin(X) scanf("%s",&X)
#define c_cin(X) scanf("%c",&X);
#define ll_cin(X) scanf("%lld", &X)
#define ull_cin(X) scanf("%llu", &X)
#define lf_cin(X) scanf("%lf", &X)

#define  i_cout(X) printf("%d\n",X)
#define  f_cout(X) printf("%g\n",X)
#define  i_cout2(X,Y) printf("%d %d\n",X,Y)
#define  l_cout(X) printf("%ld\n",X)
#define  s_cout(X) printf("%s\n",X)
#define  s_coutc(X) printf("%s",X)

#define  c_cout(X) printf("%c",X)


#define  ll_cout(X) printf("%lld\n",X)
#define  ull_cout(X) printf("%llu\n",X)



typedef long long  ll;
typedef unsigned long long  ull;

#define rept(x, s, n) for (int x = s; x < n; x++)

#define S_RTN(S)  s_cout(S);return 0


#define _itoa(A,N) sprintf(A, "%d", N);

int i_cins(int n, int* A);
int l_cins2(int n, long* A, long* B);
int s_dsort(const void* a, const void* b);
int s_asort(const void* a, const void* b);

int  _gcd(int a, int b);
int  _swp(int* a, int* b);
int _cknum(char* a, int n);
int _atoi(char* s, int len);


int s_asorts(const void* a, const void* b);
int s_dsorts(const void* a, const void* b);

//昇順
int s_asorts(const void* a, const void* b) {
	return(strcmp((char*)a, (char*)b));
}
int s_dsorts(const void* a, const void* b) {
	return(strcmp((char*)b, (char*)a));
}

int s_dsort(const void* a, const void* b) {
	return(*(int*)b - *(int*)a);
}
int s_asort(const void* a, const void* b) {
	return(*(int*)a - *(int*)b);
}
int l_cins2(int n, long* a, long* b) {
	int i;
	rept(i, 0, n) {
		l_cin2(*(a + i), *(b + i));
	}
	return 0;
}
int i_cins(int n, int* a) {
	int i;
	for (i = 0; i < n; i++) {
		i_cin(*(a + i));
	}

	return 0;
}
int _gcd(int a, int b) {
	int r, tmp;
	if (a < b) { tmp = a; a = b; b = tmp; }
	r = a % b;
	while (r) {
		if (!r) break;
		a = b; b = r;
		r = a % b;
	}
	return(b);
}
// puts("Yes\n") puts("No\n")
// scanf("%d.%d") 浮動小数点入力を整数２つで得る


//#define pai  3.1415926535      
#define deg_rad(X)  (X*(M_PI/180))

long _max(long a, long b) {
	return a > b ? a : b;
}
long _min(long a, long b) {
	return a < b ? a : b;
}
int _swp(int* a, int* b)
{
	int tmp;
	tmp = *b; *b = *a; *a = tmp;
	return 0;
}

int _cknum(char* a, int n) {
	int i;
	char t = '0';

	for (i = 0; i < n; i++) {
		if (a[i] < '0' || a[i]>'9') return 1;
	}
	return 0;
}


int _atoi(char* s, int len) {
	char tmp[20];
	memcpy(tmp, s, len);
	tmp[len] = 0x00;
	return (atoi(tmp));
}

//素因数分解　pf素数が入る　pc 素数の数
ll _pfact(ll a);
static ll pf[100000000];
static ll pc;

ll _pfact(ll a) {
	long i, r;
	if (a % 2 == 0) {
		pf[pc] = 2; pc++;
		return(_pfact(a / 2));
	}
	r = sqrt(a);
	for (i = 3; i <= r; i += 2) {
		if (a % i == 0) {
			pf[pc] = i; pc++;
			return(_pfact(a / i));
		}
	}
	if (a != 1) {
		pf[pc] = a; pc++;
	}
	return 0;

}


#pragma endregion


//ABC043 B - バイナリックイージー
static char x[11];
int main(void) {
	int  len, i, p = 0;
	char ans[11];

	s_cin(x);
	len = strlen(x); x[len] = 0x00;
	for (i = 0; i < len; i++) {
		if (x[i] == 'B'){
			if (p) p--;
			continue; 
		}
		ans[p] = x[i];
		p++;
	}
	ans[p] = 0x00;
	s_cout(ans);
	return 0;
}


////ABC 98 B - Cut and Count
//int b98_sort(const void* a, const void* b);
//int b98_sort(const void* a, const void* b) {
//	return(memcmp((char*)a, (char*)b, 10));
//}
//
//static struct _s {
//	char a;
//	int  p;
//} s[101];
//
//int main(void) {
//	int i, n;
//	char ss[101];
//
//	i_cin(n);
//	scanf("%c", &(s[0].a));
//	for (i = 0; i < n; i++){
//		scanf("%c", &(s[i].a));
//		s[i].p = i;
//	}
//	
//	qsort(s, n, sizeof(struct _s), b98_sort);
//	for (i = 0; i < n; i++) {
//		printf("%d:%c\n", s[i].p, s[i].a);
//	}
//	int se[50][2], cnt = 0,c=0;
//
//	se[0][0] = s[0].p;
//	for (i = 1; i < n; i++) {
//		printf("%d:%c %c\n", i, s[i].a, s[i - 1].a);
//		if (s[i].a != s[i - 1].a) {
//			if (c) {
//				se[cnt][1] = s[i-1].p;
//				c = 0; cnt++;
//				se[cnt][0] = s[i].p;
//			}
//		}
//		else c = 1;
//	}
//	if (c && i == n) {
//		se[0][1] = s[i - 1].p; cnt++;
//	}
//
//	printf("%d \n", cnt);
//	qsort(se, cnt, sizeof(int)*2, s_asort);
//	for(i=0;i<cnt;i++)
//	   printf("%d %d\n", se[i][0], se[i][1]);
//	
//	return 0;
//}
//

//ABC 065 B - Trained?
//int main(void) {
//	return 0;
//
//}

//ABC 133 C - Remainder Minimization 2019

//ABC 95-C Half and Half
//int main(void) {
//	long  a, b, c, x, y;
//	long tmp;
//	scanf("%ld %ld %ld %ld %ld", &a, &b, &c, &x, &y);
//	c *= 2;
//
//	/*if (a >= c) {
//		tmp=(long)x * c + ((y - x < 0) ? 0 :(long)(y - x) * b);
//		printf("%ld",tmp);
//		return 0;
//	}
//	if (b >= c) {
//		tmp =(long)y * c + ((x - y < 0) ? 0 : (long)(x - y) * b);
//	    printf("%ld\n", tmp);
//		return 0;
//	}*/
//
//	if ((a + b) <= c) {
//	     printf("%ld\n",a * x + b * y);
//	     return 0;
//	}
//	
//	tmp = a * x + b * y;
//	if (c * _max(x, y) < tmp) {
//		printf("%ld\n",c* _max(x, y)); return 0;
//	}
//
//	tmp = c * _min(x, y);
//	tmp += ((x < y) ? (y - x) * b :(x - y) * a);
//	printf("%ld\n", tmp);
//	return 0;
//}




	
	


